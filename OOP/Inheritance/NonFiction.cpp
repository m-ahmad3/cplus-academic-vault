class NonFiction : public Book {
private:
    char* subject;
public:
    NonFiction(const char* utitle, const char* uauthor, const char* uISBN, const char* usubject);
    ~NonFiction();
    void displayDetails() const;
};

NonFiction::NonFiction(const char* utitle, const char* uauthor, const char* uISBN, const char* usubject)
    : Book(utitle, uauthor, uISBN) {
    subject = new char[strlen(usubject) + 1];
    strcpy(subject, usubject);
}

NonFiction::~NonFiction() {
    delete[] subject;
}

void NonFiction::displayDetails() const {
    Book::displayDetails();
    std::cout << "Subject: " << subject << std::endl;
}

