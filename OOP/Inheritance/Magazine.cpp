class Magazine : public Publication {
private:
    int issueNumber;
    char* month;
public:
    Magazine(const char* utitle, int uissueNumber, const char* umonth);
    ~Magazine();
    void displayDetails() const;
};

Magazine::Magazine(const char* utitle, int uissueNumber, const char* umonth)
    : Publication(utitle), issueNumber(uissueNumber) {
    month = new char[strlen(umonth) + 1];
    strcpy(month, umonth);
}

Magazine::~Magazine() {
    delete[] month;
}

void Magazine::displayDetails() const {
    Publication::displayDetails();
    std::cout << "Issue Number: " << issueNumber << std::endl;
    std::cout << "Month: " << month << std::endl;
}

