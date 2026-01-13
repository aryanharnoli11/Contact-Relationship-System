#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100

typedef struct Contact {
    int id;
    char name[30];
    struct Contact *next;
} Contact;

typedef struct Relation {
    int toId;
    char relation[20];
    struct Relation *next;
} Relation;

Contact *contactList = NULL;
Relation *graph[MAX_CONTACTS];
int contactCount = 0;

/* ---------- Helpers ---------- */
Contact* FindContactByName(const char *name) {
    for (Contact *c = contactList; c; c = c->next)
        if (strcmp(c->name, name) == 0)
            return c;
    return NULL;
}

Contact* FindContactById(int id) {
    for (Contact *c = contactList; c; c = c->next)
        if (c->id == id)
            return c;
    return NULL;
}

/* ---------- Contact ---------- */
void AddContact() {
    Contact *c = malloc(sizeof(Contact));
    c->id = contactCount++;

    printf("Enter name: ");
    scanf("%29s", c->name);

    c->next = contactList;
    contactList = c;

    printf("Contact added.\n");
}

/* ---------- Relationship ---------- */
void AddRelationship() {
    char from[30], to[30], rel[20];

    printf("Enter first contact: ");
    scanf("%29s", from);
    printf("Enter second contact: ");
    scanf("%29s", to);
    printf("Enter relationship (son/father/etc): ");
    scanf("%19s", rel);

    Contact *c1 = FindContactByName(from);
    Contact *c2 = FindContactByName(to);

    if (!c1 || !c2) {
        printf("Contact not found.\n");
        return;
    }

    Relation *r = malloc(sizeof(Relation));
    r->toId = c2->id;
    strcpy(r->relation, rel);
    r->next = graph[c1->id];
    graph[c1->id] = r;

    printf("Relationship added.\n");
}

/* ---------- DISPLAY (THIS IS THE FIX) ---------- */
void ShowRelationships() {
    printf("\n--- RELATIONSHIPS ---\n");

    for (Contact *c = contactList; c; c = c->next) {
        Relation *r = graph[c->id];
        while (r) {
            Contact *to = FindContactById(r->toId);
            if (to) {
                printf("%s is %s of %s\n",
                       c->name,
                       r->relation,
                       to->name);
            }
            r = r->next;
        }
    }
}

/* ---------- MAIN ---------- */
int main() {
    for (int i = 0; i < MAX_CONTACTS; i++)
        graph[i] = NULL;

    int ch;
    while (1) {
        printf("\n1. Add Contact\n");
        printf("2. Add Relationship\n");
        printf("3. Show Relationships\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: AddContact(); break;
            case 2: AddRelationship(); break;
            case 3: ShowRelationships(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
