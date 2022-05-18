#include<iostream>
#include<string>

using namespace std;

void isRatio()
{
    cout << "get ratio'd bum";
}

void isNotRatio()
{
    cout << "not ratioed fortunately";
}

int main()
{
    string userName;    
    int tweetLikes;
    int replyLikes;

    // Greet User
    cout << "Please enter your name" << endl;
    getline (cin, userName);
    cout << "Good day! " + userName << endl;

    // Get input for post/reply likes
    cout << "How many likes did the post get? " << endl;
    cin >> tweetLikes;
    cout << "How many likes did the reply get?" << endl;
    cin >> replyLikes;

    // Check if the Tweet got ratioed
    if (replyLikes > tweetLikes)
    {
        isRatio();
    }
    else
    {
        isNotRatio();
    }
}