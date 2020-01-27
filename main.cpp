#include <iostream> // Inclut la biblio iostream (affichage de texte)
#include <string>
#include <cmath>
using namespace std; // Indique quel espace de noms on va utiliser


// CLM: ./<fileName> cpp

/*
Fonction principale "main"
Tous les programmes commencent par la function main
*/

// Compiling simple Hello World program on OS X via command line

int main()
{

  // ******************************************
    // MORE MATH

    double nombre(0);
    cout << "Donnez un nombre pour calculer sa racine carrée: " << endl;
    cin >> nombre;
    double result;

    result = sqrt(nombre);

    cout << "La racine de " << nombre << " est " << result << endl;

    return 0;

  // ******************************************


  // ******************************************
    // FIRST EXERCICE

    double a(0), b(0);
    cout << "Bienvenue dans le programme d'addition a+b !" << endl;

    cout << "Donnez une valeur pour a: ";
    cin >> a;

    cout << "Donnez une valeur pour b: ";
    cin >> b;

    double const resultat(a + b);

    cout << a << " + " << b << " = " << resultat << endl;

    return 0;
  // ******************************************



  // *********************
    // REFERENCE VARIABLE
  int ageUtilisateur(16);
  cout << "Vous avez " << ageUtilisateur << " ans (via variable)" << endl;

  /**********************
    Les références sont des étiquettes qui permettent d'appeler une variable par un autre nom.
   * ********************/
  int& maReference(ageUtilisateur); // Référence sur la variable 'ageUtilisateur'
  cout <<  "Vous avez " << maReference << " ans (via référence)" << endl;
  // *********************


  // ***********************
    // TEST VARIABLE TYPES

  int qiUtilisateur(150);
  int nombreAmis(432);
  double pi(3.14159);
  bool estMonAmi(true);
  char lettre('a');
  string prenom("Kévin"), nom("Joya");
  // ***********************


  // *********************************
    // TEST WITH CIN
      cout << "Combien vaut pi ?" << endl;
      double piUtilisateur(-1.); // On crée une case mémoire pour stocker un nombre réel
      cin >> piUtilisateur; // Et on remplit cette case avec ce qu'écrit le user

      // Quand on mélange l'utilisation des chevrons et de getline(), il faut toujours placer l'instruction cin.ignore()après la ligne cin>>a
      cin.ignore();

      cout << "Quel est votre prénom" << endl;
      string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenirune chaine de caractères
      // cin >> nomUtilisateur; // On remplit cette case avec ce qu'écrit le user
      getline(cin, nomUtilisateur); //On remplit cette case avec toutela ligne que l'utilisateur a écrit


      cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur << "." << endl;
      return 0;

  // *********************************


  // ***********************
    // DISPLAY
  cout << "Vous êtes " << prenom << nom << "." << " Votre âge est : " << ageUtilisateur << " et avez un QI de : " << qiUtilisateur << endl;

  cout << "Quel âge avez-vous ?" << endl;
  cin >> ageUtilisateur; // on utilise 'cin' pour faire entrer des informations dans le programme associé aux chevrons >>
  cout << "Vous avez " << ageUtilisateur << " ans !" << endl;
  return 0;
  // ***********************



  // cout << "Bonjour le peuple !" << endl << "Comment allez-vous ?" << endl; // Affiche le message à l'écran
  // cout << "Je fais des tests pour apprendre le C++ !" << endl; // Affiche le message à l'écran
  // cout << "\"" << endl;
  // cout << "\\" << endl;
  // return 0; // Termine la fonction main et donc le programme
}