#include <iostream>
#include<ctime>

using namespace std;

int main ()
{
        int guessGame;
        int secretNumber ;
        int guessChances ;
        int GuessLimit = 0;
        int easterNumber =69;
        cout << "****Welcome to gussing Game!****\n"<< endl;
        cout<< "****GUESS A NUMBER BETWEEN 1-100**** \n"<<endl;



        srand(time(NULL));

        secretNumber = (rand() % 100 )+1;


       

       
       for(guessChances = 8; guessChances >= GuessLimit; guessChances--)
       { 
        
            

         if (guessGame == easterNumber)
        {
            cout << "!!!Go Get Some Help You Naughty (° ͜ʖ ͡°) (⚆_⚆)!!!!! !!!This Game Is Not For You!!!"<< endl;

                     break;



        }
          if (guessGame > secretNumber)
         {
             cout << "Your Guess "<<guessGame<< " Is !! TOO HIGH !! \n"<<endl;

         }

         if (guessGame < secretNumber && guessChances!=8)
         {
             cout << "Your Guess "<< guessGame<< " Is !! TOO LOW !! \n"<<endl;

         }

         if (guessChances==0 && guessGame!= secretNumber) 
         {
            cout<< "Game Over!!"<<endl;
            break;
         }

        


         if ( guessChances==1)
         {

            cout << " !! Final Chance !! \n"<< endl;

         }   

          if (guessGame != secretNumber)
          {   
                cout << "Chances Left = "<< guessChances <<'\n' ;
                cout << "Enter Your Guess :";
                

                cin >> guessGame ;
                
                cout<< "\n";
              
             

          }

          
 
          
          else
          {
             cout << "!!Congratulation!! You Have Won!!!"<<endl;

             break;

          }
       }

         
           





       
       
       
      
  return 0;
}