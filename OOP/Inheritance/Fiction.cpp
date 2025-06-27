class Fiction : public Book {
private:
    char* genre;
public:
    Fiction(const char* utitle, const char* uauthor, const char* uISBN, const char* ugenre);
    ~Fiction();
    void displayDetails() const;
};

Fiction::Fiction(const char* utitle, const char* uauthor, const char* uISBN, const char* ugenre)
    : Book(utitle, uauthor, uISBN) {
    genre = new char[strlen(ugenre) + 1];
    strcpy(genre, ugenre);
}

Fiction::~Fiction() {
    delete[] genre;
}

void Fiction::displayDetails() const {
    Book::displayDetails();
    std::cout << "Genre: " << genre << std::endl;
}

