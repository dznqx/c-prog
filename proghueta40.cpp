#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Абстрактный класс Edition
class Edition {
public:
    virtual void print() = 0;
    virtual bool authorMatches(const string& author) = 0;
};

// Класс Book
class Book : public Edition {
public:
    Book(const string& title, const string& author, int year, const string& publisher) 
        : title_(title), author_(author), year_(year), publisher_(publisher) {}
    
    void print() override {
        cout << "Book: " << title_ << " by " << author_ << ", " << year_ << ", published by " << publisher_ << endl;
    }
    
    bool authorMatches(const string& author) override {
        return author_ == author;
    }
    
private:
    string title_;
    string author_;
    int year_;
    string publisher_;
};

// Класс Article
class Article : public Edition {
public:
    Article(const string& title, const string& author, const string& journal, int issueNumber, int year, const string& publisher) 
        : title_(title), author_(author), journal_(journal), issueNumber_(issueNumber), year_(year), publisher_(publisher) {}
    
    void print() override {
        cout << "Article: " << title_ << " by " << author_ << ", published in " << journal_ << ", issue " << issueNumber_ << ", " << year_ << ", published by " << publisher_ << endl;
    }
    
    bool authorMatches(const string& author) override {
        return author_ == author;
    }
    
private:
    string title_;
    string author_;
    string journal_;
    int issueNumber_;
    int year_;
    string publisher_;
};

// Класс OnlineResource
class OnlineResource : public Edition {
public:
    OnlineResource(const string& title, const string& author, const string& link, const string& annotation) 
        : title_(title), author_(author), link_(link), annotation_(annotation) {}
    
    void print() override {
        cout << "Online resource: " << title_ << " by " << author_ << ", link: " << link_ << ", annotation: " << annotation_ << endl;
    }
    
    bool authorMatches(const std::string& author) override {
        return author_ == author;
    }
    
private:
    string title_;
    string author_;
    string link_;
    string annotation_;
};

int main() {
    // Создание каталога
    vector<Edition*> catalog;
    catalog.push_back(new Book("War and Peace", "Leo Tolstoy", 1869, "The Russian Messenger"));
    catalog.push_back(new Article("The Unreasonable Effectiveness of Mathematics in the Natural Sciences", "Leo Tolstoy", "Communications in Pure and Applied Mathematics", 13, 1960, "John Wiley & Sons"));
    catalog.push_back(new OnlineResource("The Philosophy of Science Fiction Film", "Christopher Falzon", "https://plato.stanford.edu/entries/science-fiction-film/", "This entry provides an overview of the philosophical issues raised by the genre of science fiction film."));
    
    // Вывод полной информации из каталога
        // Вывод полной информации из каталога
    for (Edition* edition : catalog) {
        edition->print();
    }
    
    // Поиск изданий по фамилии автора
    string authorToSearch;
    getline(cin, authorToSearch);
    cout << "Search results for author '" << authorToSearch << "':" << endl;
    for (Edition* edition : catalog) {
        if (edition->authorMatches(authorToSearch)) {
            edition->print();
        }
    }
    
    // Очистка памяти от созданных объектов
    for (Edition* edition : catalog) {
        delete edition;
    }
    
    return 0;
}

