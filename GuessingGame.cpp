#include <iostream>

using namespace std;

int main ()
{
        int guessGame;
        int secretNumber = 9;
        int guessChances ;
        int GuessLimit = 0;
        int easterNumber =69;
        cout << "Welcome to gussing Game!\n"<< endl;

        if (guessGame == easterNumber)
        {
            cout << "Go Get Some Help You Naughty (° ͜ʖ ͡°) (⚆_⚆)!!!!!"<< endl;



        }
       
       for(guessChances = 4; guessChances >= GuessLimit; guessChances--)
       { 

         if (guessGame == easterNumber)
        {
            cout << "!!!Go Get Some Help You Naughty (° ͜ʖ ͡°) (⚆_⚆)!!!!! !!!This Game Is Not For You!!!"<< endl;

                     break;



        }


         if (guessChances==0 && guessGame!= secretNumber) 
         {
            cout<< "Game Over!!"<<endl;
            break;
         }
            


          if ( guessChances==1)
         {

            cout << "Hint: What comes After August ?\n"<< endl;

         }     
          if (guessGame != secretNumber)
          {   
                cout << "Chance Left = "<< guessChances << endl;
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