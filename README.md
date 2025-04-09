# LibraryManagementSystem

# Description
This is a simple C++ program that demonstrates the use of friend functions to allow one class (Library) to access the private members of another class (Book). Specifically, it shows how the Library class can access a Book's private data (name and price) using a friend function.

This program is a basic implementation of a Library Management System with the following classes:

Book: Contains private data members such as bookName and price.

Library: Contains a method book_price() which needs access to Book's private members.

The key concept demonstrated is the friend function, which allows controlled access between otherwise unrelated classes.

# Why Use a Friend Function?
In C++, private members of a class are only accessible from within that class. If another class (like Library) needs access to those private members (like Book's bookName and price), you cannot access them directly.

Using a friend function allows selective access to private data without compromising encapsulation, because:

It grants specific functions access rather than exposing everything publicly.

It helps establish tightly-coupled interactions (like between Library and Book here) without making all data public.

# How It Works
The Book class defines bookName and price as private.

It declares the book_price() method from Library as a friend, which allows book_price() to access and display book details.

# Key Concepts
Friend Functions: Allow a non-member function or class to access private/protected members of another class.

Encapsulation: Maintained by granting access only where needed.

Object-Oriented Design: Shows collaboration between two classes with controlled access.
