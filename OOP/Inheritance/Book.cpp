class Book : public Publication {
protected:
    char* author;
    char* ISBN;
public:
    Book(const char* utitle, const char* uauthor, const char* uISBN);
    ~Book();
    void displayDetails() const;
};

Book::Book(const char* utitle, const char* uauthor, const char* uISBN)
    : Publication(utitle) {
    author = new char[strlen(uauthor) + 1];
    strcpy(author, uauthor);
    ISBN = new char[strlen(uISBN) + 1];
    strcpy(ISBN, uISBN);
}

Book::~Book() {
    delete[] author;
    delete[] ISBN;
}

void Book::displayDetails() const {
    Publication::displayDetails();
    std::cout << "Author: " << author << std::endl;
    std::cout << "ISBN: " << ISBN << std::endl;
}

