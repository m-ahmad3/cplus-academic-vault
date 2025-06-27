#include "PicturePost.h"
#include "TextPost.h"
#include "VoicePost.h"
#include "VideoPost.h"

// Function to display all posts using polymorphism
void showAllPosts(Post**, int);

// Main function
int main() {

    // Example usage
    char author1[] = "Elon Musk";
    char content1[] = "Hello, world!";
    char timestamp1[] = "2024-07-03";
    char title1[] = "Introduction";

    char author2[] = "Satya Nadella";
    char content2[] = "picture.jpg";
    char timestamp2[] = "2024-07-03";
    char caption2[] = "Beautiful scenery";

    char author3[] = "Zuckerberg";
    char content3[] = "/path/to/audio.mp3";
    char timestamp3[] = "2024-07-04";
    int duration3 = 120; // 2 minutes

    char author4[] = "Sundar Pichai";
    char content4[] = "/path/to/video.mp4";
    char timestamp4[] = "2024-07-05";
    int duration4 = 180; // 3 minutes
    char title4[] = "Vacation Video";

    // Pointer List of Post class
    Post* posts[] = {
        new TextPost(author1, content1, timestamp1, title1),
        new PicturePost(author2, content2, timestamp2, caption2),
        new VoicePost(author3, content3, timestamp3, duration3),
        new VideoPost(author4, content4, timestamp4, duration4, title4)
    };

    showAllPosts(posts, 4);

    // Clean up dynamically allocated memory
    for (int a = 0; a < 4; a++) {
        delete posts[a];
    }

    return 0;
}

// Defination of showAllposts Function
void showAllPosts(Post** post, int count) {
    cout << "-------------------" << endl;
    for (int a = 0; a < count; a++) {
        post[a]->Display();
    }
}