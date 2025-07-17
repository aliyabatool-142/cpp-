#include <iostream>
#include <string>
using namespace std;

int main() {
    string questions[10] = {
        "1. Which planet is known as the 'Red Planet'?",
        "2. What is the chemical symbol for Gold?",
        "3. What is the square root of 144?",
        "4. Who was the first President of the United States?",
        "5. Who wrote Romeo and Juliet?",
        "6. Which of the following is an output device?",
        "7. Which is the longest river in the world?",
        "8. What part of the cell contains the genetic material?",
        "9. How many Surahs are there in the Holy Quran?",
        "10. Who is currently the Secretary-General of the United Nations?"
    };

    string options[10][4] = {
        {"A) Earth", "B) Mars", "C) Venus", "D) Jupiter"},
        {"A) Gd", "B) Ag", "C) Go", "D) Au"},
        {"A) 10", "B) 11", "C) 12", "D) 14"},
        {"A) Abraham Lincoln", "B) Thomas Jefferson", "C) George Washington", "D) John Adams"},
        {"A) William Shakespeare", "B) Charles Dickens", "C) Leo Tolstoy", "D) Mark Twain"},
        {"A) Keyboard", "B) Mouse", "C) Printer", "D) Scanner"},
        {"A) Amazon", "B) Nile", "C) Yangtze", "D) Mississippi"},
        {"A) Mitochondria", "B) Nucleus", "C) Ribosome", "D) Cytoplasm"},
        {"A) 112", "B) 113", "C) 114", "D) 115"},
        {"A) Antonio Guterres", "B) Ban Ki-moon", "C) Kofi Annan", "D) Jens Stoltenberg"}
    };

    char correctAnswers[10] = {'B', 'D', 'C', 'C', 'A', 'C', 'B', 'B', 'C', 'A'};

    char userAnswer;
    int score = 0;
    cout <<"********************************************\n";
    cout << "       Welcome to the Quiz Game!\n";
    cout <<"********************************************\n\n";
    cout << "Type A, B, C or D to answer each question.\n\n";
    
    int size = sizeof(questions)/sizeof(questions[0]);
    for (int i = 0; i < 10; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }
        cout << "Your answer: ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);

        if (userAnswer == correctAnswers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong! Correct answer: " << correctAnswers[i] << "\n\n";
        }
    }

    cout<<"*********************************************************\n";
    cout <<  " Your Score: " << score << "/10\n";
    cout <<"Score percentage :" <<(score/(double)size)*100<<"%\n";
    cout <<"*********************************************************\n"<<endl;

    if(score>=7){
        cout <<"********************************************\n";
        cout<<"        Welcome to level 2!  "<<endl;
        cout <<"********************************************\n";
        
    string questions[10] = {
        "1. What is the value of 'x' in the equation 3x-7 = 2x+5?",
        "2. Which of the following sorting algorithms has the best average-case time complexity?",
        "3. Which country has the most natural lakes?",
        "4. What is the correct synonym for 'benevolent'?",
        "5. What is the unit of electric capacitance?",
        "6. Which gas is produced when HCL react with zinc meatl?",
        "7. Which part of brain controls balance and coordination?",
        "8. The Battle of Plassy in 1757 was fought between the British and which Indian ruler?",
        "9. What was the first Ghazwa fought by Prophet Muhammad (PBUH)?",
        "10. Which country is hosting the 2025 World Expo?"
    };

    string options[10][4] = {
        {"A) 10", "B) 12", "C) 5", "D) -5"},
        {"A) Bubble sort", "B) Insertion sort", "C) Quick sort", "D) Selection sort"},
        {"A) Canada", "B) Russia", "C) Brazil", "D) USA"},
        {"A) Greedy", "B) Kind", "C) Rude", "D) Proud"},
        {"A) Ohm", "B) Waat", "C) Farad", "D) Coulomb"},
        {"A) Oxygen", "B) Carbon", "C) Nitrogen", "D) Hydrogen"},
        {"A) Cerebrum", "B) Cerebellum", "C) Medulla", "D) Thalamus"},
        {"A) Tipu Sultan", "B) Bahadur Shah Zafar", "C) Siraj-ud-Daulah", "D) Ranjit Singh"},
        {"A) Ghazwa-e-Badr", "B) Ghazwa-e-Uhud", "C) Ghazwa-e-Tabuk", "D) Ghazwa-e-Khandaq"},
        {"A) France", "B) Saudi Arabia", "C) Japan", "D) USA"}
    };

    char correctAnswers[10] = {'A', 'C', 'A', 'B', 'C', 'D', 'B', 'C', 'A', 'B'};

    char userAnswer;
    int score = 0;
    
    int size = sizeof(questions)/sizeof(questions[0]);
    for (int i = 0; i < 10; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }
        cout << "Your answer: ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);

        if (userAnswer == correctAnswers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong! Correct answer: " << correctAnswers[i] << "\n\n";
        }
    }

    cout<<"*********************************************************\n";
    cout << " Your Score: " << score << "/10\n";
    cout <<"Score percentage :" <<(score/(double)size)*100<<"%\n";
    cout <<"*********************************************************\n"<<endl;
    
        if(score>=7){
            cout <<"********************************************\n";
            cout<<"        Welcome to level 3!  "<<endl;
            cout <<"********************************************\n";
        
        string questions[10] = {
            "1. If f(x) = x^2 + 3x + 2, then what is f(f(1)?",
            "2. Which of the following particles has the least mass?",
            "3. Which of the following molecules is not polar?",
            "4. Which of these data structures provides the fastest search time on average?",
            "5. Which enzyme is responsible for unwinding?",
            "6. Who was the Last Caliph of the Ottoman Empire?",
            "7. Which novel begins with the line 'Call me Ishmael'?",
            "8. Which Prophet is known as 'Kaleemullah'?",
            "9. Which desert is the laegest non-polar desert in the world?",
            "10. If in a code language, APPLE = 50 and BALL = 24, what is CAT?"
        };

        string options[10][4] = {
         {"A) 64", "B) 49", "C) 36", "D) 81"},
         {"A) Proton", "B) Electron", "C) Neutron", "D) Alpha particle"},
         {"A) H2O", "B) NH3", "C) CO2", "D) HCL"},
         {"A) Stack", "B) Linked List", "C) Hash Table", "D) Queue"},
         {"A) Ligase", "B) Polymerase", "C) Helicase", "D) Transcriptase"},
         {"A) Suleiman the Magnificent", "B) Abdul Hamid 2", "C) Mehmed 4", "D) Abdulmejid 2"},
         {"A) Moby-Dick", "B) The Old Man and the Sea", "C) Great Expectations", "D) Heart of Darkness"},
         {"A) Prophet Ibrahim(AS)", "B) Prophet Musa(AS)", "C) Prophet Isa(AS)", "D) Prophet Yusuf(AS)"},
         {"A) Sahara", "B) Arabian", "C) Gobi", "D) Kalahari"},
         {"A) 27", "B) 24", "C) 18", "D) 21"}
        };

        char correctAnswers[10] = {'B', 'B', 'C', 'C', 'C', 'D', 'A', 'B', 'A', 'C'};

        char userAnswer;
        int score = 0;
    
        int size = sizeof(questions)/sizeof(questions[0]);
        for (int i = 0; i < 10; i++) {
            cout << questions[i] << endl;
            for (int j = 0; j < 4; j++) {
                cout << options[i][j] << endl;
            }
            cout << "Your answer: ";
            cin >> userAnswer;
            userAnswer = toupper(userAnswer);

            if (userAnswer == correctAnswers[i]) {
                cout << "Correct!\n\n";
                score++;
            } else {
                cout << "Wrong! Correct answer: " << correctAnswers[i] << "\n\n";
            }
        }

        cout<<"*********************************************************\n";
        cout << "Congratulations! You have completed the quiz"<<endl<<" Your Score: " << score << "/10\n";
        cout <<"Score percentage :" <<(score/(double)size)*100<<"%\n";
        cout <<"*********************************************************\n";
        
        } else{
            cout<<"Try again! ";
        }
    } else{
        cout<<"Quiz Over! "<<endl<<"Try again! ";
    }
    
    return 0;
}