int main() {
    // Create a book
    Book book("1984", "George Orwell", "1234567890");
    book.displayDetails();
    
    // Create a fiction book
    Fiction fiction("The Hobbit", "J.R.R. Tolkien", "0987654321", "Fantasy");
    fiction.displayDetails();
    
    // Create a non-fiction book
    NonFiction nonFiction("A Brief History of Time", "Stephen Hawking", "1122334455", "Science");
    nonFiction.displayDetails();
    
    // Create a magazine
    Magazine magazine("National Geographic", 202, "June 2024");
    magazine.displayDetails();
    
    return 0;
}

