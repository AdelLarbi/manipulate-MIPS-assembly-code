#include <iostream>
#include <OPLabel.h>
#include <Program.h>
#include <OPExpression.h>
#include <OPRegister.h>
#include <OPImmediate.h>
#include <Cfg.h>

/* 
 * EXEMPLE DE TEST des méthodes que vous devez coder
 */

int main(int argc, char ** argv) {
  
  if (argc < 2) {
    cerr << "pas de fichier assembleur en paramètre, pb !" << endl;
    return -1;
  }
  
  // parsing d'un fichier assembleur 
  Program p2(argv[1]);

  // affichage du programme
  p2.display();

  // calcul des fonction
  p2.comput_function();

  // affichage du nombre de fonction
  cout << "dans le fichier " << argv[1]  << " nb function : " << p2.nbr_func() << endl;

  for (int i = 0; i < p2.nbr_func() ; i++) {
    cout << " ----------------- FONCTION " << i<< " --------------------" << endl;
    
    // affichage du fonction
    p2.get_function(i)->display();
  }
    
  return 0;
}