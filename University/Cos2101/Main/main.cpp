#include <iostream>

using namespace std;

int FindGrade(int score);
int main(){
    int score;
    cout << "Enter your score : ";
    cin >> score;
    cout << "Your Grade is: " << FindGrade(score);
    return 0;
}
//Function to find the grade of a student based
//on their score
int FindGrade(int score){
    if (score >= 80){
        return 4;
    }
    else if (score >= 70){
        return 3;
    }
    else if (score >= 60){
        return 2;
    }
    else if (score >= 50){
        return 1;
    }
    else{
        return 0;
    }
}