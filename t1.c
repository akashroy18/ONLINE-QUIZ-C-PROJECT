 #include <stdio.h>


int askQuestion(char *question, char *optionA, char *optionB, char *optionC, char correctOption) {
    char userAnswer;
    
    printf("%s\n", question);
    printf("A. %s\n", optionA);
    printf("B. %s\n", optionB);
    printf("C. %s\n", optionC);
    
    printf("Your answer (A/B/C): ");
    scanf(" %c", &userAnswer);
    
    if (userAnswer == correctOption) {
        printf("Correct!\n\n");
        return 1; 
    } else {
        printf("Incorrect! The correct answer is %c.\n\n", correctOption);
        return 0;
    }
    
}

int main() {
    int score = 0;

    printf("Welcome to the Online Quiz Game!\n\n");

    
    score += askQuestion("What is the capital of France?", "Paris", "London", "Berlin", 'A');

    
    score += askQuestion("Which programming language is this program written in?", "Java", "C++", "C", 'C');

    
    score += askQuestion("What is the largest planet in our solar system?", "Mars", "Jupiter", "Earth", 'B');

   
    score += askQuestion("Who wrote 'Romeo and Juliet'?", "Charles Dickens", "William Shakespeare", "Jane Austen", 'B');

   
    score += askQuestion("What is the capital of Japan?", "Beijing", "Seoul", "Tokyo", 'C');
   
    score+=askQuestion("who is the founder of face book?", "mark zukerberg","elon musk","larry page",'A');
  
    score+=askQuestion("who is the first prime minister of india?","dr.rajendara prasad","pandit jawahar lal nehru","narendra modi",'B');
   
    score+=askQuestion("what is the correct notation of magneisum?","Na","Al","Mg",'C');
    
    score+=askQuestion("what is the capatial of bihar?","Patna","Delhi","Itanagar",'A');
   
    score+=askQuestion("what is the capital of india?","Washington","Delhi","Singapore",'B');
    
    score+=askQuestion("which continent is the biggest continent in world?","asia","europe","africa",'A');
 

    
    printf("Quiz completed! Your final score is: %d out of 11\n", score);

    return 0;
}
