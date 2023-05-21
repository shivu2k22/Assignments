#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Post {
private:
    string content;
    string author;

public:
    Post(const string& content, const string& author) {
        this->content = content;
        this->author = author;
    }

    string getContent() const {
        return content;
    }

    string getAuthor() const {
        return author;
    }
};

class User {
private:
    string username;
    vector<Post> posts;

public:
    User(const string& username) {
        this->username = username;
    }

    void createPost(const string& content) {
        Post newPost(content, username);
        posts.push_back(newPost);
    }

    void viewTimeline() {
        cout << "Timeline for User: " << username << endl;
        for (const auto& post : posts) {
            cout << "Author: " << post.getAuthor() << endl;
            cout << "Content: " << post.getContent() << endl;
            cout << "---------------------" << endl;
        }
    }
};

int main() {
    User user("John");
    user.createPost("Hello, everyone! This is my first post.");
    user.createPost("Just had a great day!");

    user.viewTimeline();

    return 0;
}