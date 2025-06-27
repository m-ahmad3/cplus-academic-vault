#include "PicturePost.h"
#include "TextPost.h"
#include "VoicePost.h"
#include "VideoPost.h"

// Function declaration to display all posts using polymorphism
void showAllPosts(Post**, int);

// Template function to perform operations on posts
template <typename Func>
void performOperation(Post**, int, Func, int&);

// Function to count words in TextPost
void countWordsInTextPost(Post*, int&);

// Function to calculate total duration of VoicePost
void calculateTotalDurationOfVoicePosts(Post*, int&);

// Main function
int main() {
    // Example usage with different types of posts
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

    // Create an array of different types of posts
    Post* posts[] = {
        new TextPost(author1, content1, timestamp1, title1),
        new PicturePost(author2, content2, timestamp2, caption2),
        new VoicePost(author3, content3, timestamp3, duration3),
        new VideoPost(author4, content4, timestamp4, duration4, title4)
    };

    // Display all posts using polymorphism
    cout << "Displaying all posts:" << endl;
    showAllPosts(posts, 4);

    int totalWords = 0;
    try {
        // Count words in text posts
        cout << "\nCounting words in text posts:" << endl;
        performOperation(posts, 4, countWordsInTextPost, totalWords);
        cout << "Total Words in Text Posts: " << totalWords << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    int totalDuration = 0;
    try {
        // Calculate total duration of voice posts
        cout << "\nCalculating total duration of voice posts:" << endl;
        performOperation(posts, 4, calculateTotalDurationOfVoicePosts, totalDuration);
        cout << "Total duration of voice posts: " << totalDuration << " seconds" << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < 4; ++i) {
        delete posts[i];
    }

    return 0;
}

// Definition of showAllposts Function
void showAllPosts(Post** post, int count) {
    cout << "-------------------" << endl;
    // Iterate through each post and display it using polymorphism
    for (int a = 0; a < count; a++) {
        post[a]->Display();
    }
}


// Template function to perform operations on posts
template <typename Func>
void performOperation(Post** posts, int count, Func func, int& total) {
    // Iterate through each post
    for (int a = 0; a < count; a++) {
        try {
            // Call the provided function func with the current post and total
            func(posts[a], total);
        }
        catch (const exception& e) {
            cerr << "Error processing post: " << e.what() << endl;
        }
    }
}

// Function to count words in TextPost
void countWordsInTextPost(Post* post, int& totalWordCount) {
    // Attempt to cast the post to TextPost
    TextPost* textPost = dynamic_cast<TextPost*>(post);
    if (textPost) {
        int wordCount = 0;
        const char* content = textPost->getContent();
        bool inWord = false;

        // Iterate through the content of the text post
        for (int a = 0; content[a] != '\0'; ++a) {
            // Check for whitespace characters manually
            if (content[a] == ' ' || content[a] == '\t' || content[a] == '\n' || content[a] == '\r' || content[a] == '\f' || content[a] == '\v') {
                inWord = false;
            }
            else if (!inWord) {
                inWord = true;
                wordCount++;
            }
        }

        // Output the word count for this text post
        cout << "Word count in text post: " << wordCount << endl;
        // Update the total word count
        totalWordCount += wordCount;
    }
    else {
        // Throw an exception if the post is not of type TextPost
        throw runtime_error("Invalid post type for word count.");
    }
}

// Function to calculate total duration of VoicePost
void calculateTotalDurationOfVoicePosts(Post* post, int& totalDuration) {
    // Attempt to cast the post to VoicePost
    VoicePost* voicePost = dynamic_cast<VoicePost*>(post);
    if (voicePost) {
        // Add the duration of this voice post to the total duration
        totalDuration += voicePost->getDuration();
    }
    else {
        // Throw an exception if the post is not of type VoicePost
        throw runtime_error("Invalid post type for duration calculation.");
    }
}
