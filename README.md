# 📇 Contact Relationship Management System
### *A Data Structures Project in C using Linked Lists & Graphs*

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg">
  <img src="https://img.shields.io/badge/Data%20Structures-Linked%20List%20%7C%20Graph-brightgreen">
  <img src="https://img.shields.io/badge/Project%20Type-College%20Mini%20Project-purple">
  <img src="https://img.shields.io/badge/Status-Completed-success">
</p>

---

## 📌 Project Description

The **Contact Relationship Management System** is a **console-based C application** designed to manage contacts and represent relationships between them using **graph data structures**.

Each contact is stored dynamically using a **linked list**, while relationships between contacts are modeled using a **graph implemented as an adjacency list**. This project demonstrates real-world application of **Data Structures and Algorithms (DSA)** concepts.

---

## 🎯 Objectives (College Report Ready)

- To understand and implement **Linked Lists**
- To represent real-life relationships using **Graphs**
- To practice **dynamic memory allocation**
- To develop a structured, menu-driven C application
- To strengthen understanding of pointers and structures

---

## ✨ Features

✔ Add new contacts dynamically  
✔ Create relationships (father, son, friend, etc.)  
✔ Display all relationships clearly  
✔ Efficient memory usage  
✔ Simple menu-driven interface  

---

## 🧠 Data Structures Used

| Data Structure | Purpose |
|---------------|--------|
| Linked List | Store contact details |
| Graph (Adjacency List) | Store relationships |
| Structure (`struct`) | Define Contact & Relation |

---

## 🛠 Technology Stack

- **Language:** C  
- **Compiler:** GCC  
- **Platform:** Console  
- **Paradigm:** Procedural Programming  

---

## 📂 Project Structure

```

📁 Contact-Relationship-Management-System
│
├── main.c
├── README.md

````

---

## ▶️ How to Compile & Run

```bash
gcc main.c -o contact_system
./contact_system
````

---

## 📋 Menu Options

```
1. Add Contact
2. Add Relationship
3. Show Relationships
4. Exit
```

---

## 🧠 Algorithm

### Algorithm: Contact Relationship Management System

1. Start the program
2. Initialize graph array with NULL values
3. Display menu options
4. Read user choice
5. If choice = 1:

   * Accept contact name
   * Assign unique ID
   * Insert contact into linked list
6. If choice = 2:

   * Accept two contact names and relationship
   * Validate both contacts
   * Add relationship edge in graph
7. If choice = 3:

   * Traverse contact list
   * For each contact, traverse its adjacency list
   * Display relationships
8. If choice = 4:

   * Exit program
9. Repeat until exit

---

## 🔄 Flowchart

```text
          ┌──────────────┐
          │   Start      │
          └──────┬───────┘
                 │
         ┌───────▼────────┐
         │ Show Menu       │
         └───────┬────────┘
                 │
        ┌────────▼─────────┐
        │ User Choice       │
        └───┬─────┬─────┬──┘
            │     │     │
     ┌──────▼┐ ┌──▼───┐ ┌▼─────┐
     │ Add   │ │ Add  │ │Show  │
     │Contact│ │Relation│Relation│
     └───────┘ └──────┘ └──────┘
                 │
             ┌───▼────┐
             │ Exit   │
             └────────┘
```

---

## 🧪 Test Cases

### Test Case 1

**Input:**

```
Add Contact → Ram
Add Contact → Shyam
Add Relationship → Ram Shyam father
```

**Output:**

```
Ram is father of Shyam
```

---

### Test Case 2

**Input:**

```
Add Relationship → A B friend
```

**Output:**

```
Contact not found.
```

---

### Test Case 3

**Input:**

```
Show Relationships (no relationships added)
```

**Output:**

```
--- RELATIONSHIPS ---
(no output)
```

---

## ⏱ Time & Space Complexity

### Time Complexity

| Operation          | Complexity |
| ------------------ | ---------- |
| Add Contact        | O(1)       |
| Find Contact       | O(n)       |
| Add Relationship   | O(n)       |
| Show Relationships | O(n + e)   |

Where:

* `n` = number of contacts
* `e` = number of relationships

---

### Space Complexity

* **Contacts:** O(n)
* **Relationships:** O(e)
* **Total:** **O(n + e)**

---

## ⚠️ Limitations

* Maximum contacts limited to 100
* Single-word names only
* One-directional relationships
* No permanent storage (no file handling)

---

## 🚀 Future Enhancements

* Bidirectional relationships
* File handling (save/load)
* Delete or update contacts
* Relationship search
* GUI-based application

---

## 🎓 Academic Use

✔ Suitable for **DSA Mini Project**
✔ Ideal for **College Practical & Viva**
✔ Strong **GitHub Portfolio Project**

---

## 👨‍💻 Author

**Aryan Harnoli**
Computer Science Student
Interest: Data Structures & System Programming

---

## ⭐ Support

If you like this project:

* 🌟 Star the repo
* 🍴 Fork it
* 📢 Share it

---

<p align="center">
  <b>Happy Coding 🚀</b>
</p>
