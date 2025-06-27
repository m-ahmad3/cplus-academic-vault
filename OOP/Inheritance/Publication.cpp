/*
The goal is to develop a simplified version of an online bookstore 
focusing on books and different types of publications.
This app will use inheritance to manage different types of books and magazines.
Requirements

    Publications:
        Book: Stores title, author, and ISBN.
        Magazine: Stores title, issue number, and month of publication.
    Book Types:
        Fiction: Inherits from Book and includes a genre.
        Non-Fiction: Inherits from Book and includes a subject area.
*/

class Publication {
protected:
    char* title;
public:
    Publication(const char* utitle);
    ~Publication();
    void displayDetails() const;
};

Publication::Publication(const char* utitle) {
    title = new char[strlen(utitle) + 1];
    strcpy(title, utitle);
}

Publication::~Publication() {
    delete[] title;
}

void Publication::displayDetails() const {
    std::cout << "Title: " << title << std::endl;
}
