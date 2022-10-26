int main(){
     int num1, num2;
     char operator, clear , repeat = 'y';
     float answer = 0;

     while(repeat == 'y'){
          //get user input
          printf("Enter Equation: ");
          scanf(" %d %c %d", &num1, &operator, &num2);

          switch(operator){
              case '+':
                 answer = num1 + num2; // check if operator is +
                 break;
              case '-':
                  answer = num1 - num2; // check  if operator is -
                  break;
              case '*':
                  answer = num1 * num2; // check if  operator is *
              case '/':
                  answer = (float) num1 / num2; // convert result to float
                  break;
              default:
                printf("error: %c not supported", operator);
                return 1; // break not needed if has return statement
          }

          //display answer
          printf("answer: %d %c %d = %f\n", num1, operator, num2, answer);
          while((clear = getchar()) != '\n' && clear != EOF); // clear input buffer

          //ask if user wants to repeat
          printf("repeat?(y/n): ");
          scanf(" %c", &repeat);
     }

    printf(" Clarisse Nicole Berondo ");
     //exit program
     return 0;
 }

