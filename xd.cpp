#include <iostream>
#include <time.h>
using namespace std;

string elecUsua(){
    string eleccion;
    cout << "Selecciona piedra, papel o tijera: "; cin >> eleccion;
    while (eleccion != "piedra" && eleccion != "papel" && eleccion != "tijera") {
        cout << "Eleccion invalida. Por favor elige piedra, papel o tijera: "; cin >> eleccion;
    }
    return eleccion;
}

string elecMaqui(){
    srand(time(NULL));
    int random = rand() % 3; 
    if (random == 0) 
        return "piedra";
    else if (random == 1) 
        return "papel";
    else 
        return "tijera";
}

string ganadorRonda(string usuario, string maquina){
    if(usuario == maquina)
        return "Empate";
    else if((usuario == "piedra" && maquina == "tijera") || (usuario == "papel" && maquina == "piedra") ||(usuario == "tijera" && maquina == "papel")){
        return "Usuario";
    }
    else{
        return "Maquina";
    }
}

string ganadorJuego(int ptsUsuario, int ptsMaquina){
    if (ptsUsuario > ptsMaquina) 
        cout << "Felicidades!! Haz ganado el Juego. GG WP";
    else if (ptsMaquina > ptsUsuario) 
        cout << "Has perdido. Suerte para la proxima vez.";
    else 
        cout << "Has empatado. Eso estuvo muy reñido";
}


void juego(){
    string dificultad;
    
    cout << "\nSelecciona la dificultad (principiante, intermedio, avanzado): "; cin >> dificultad;
    while(dificultad != "Principiante" && dificultad != "principiante" && dificultad != "Intermedio" && dificultad != "intermedio" && dificultad != "Avanzado" && dificultad != "avanzado"){
        cout << "\n\t\t\tOPCION INVALIDA!!!\n \nPor favor, seleccione una opcion valida (Principiante, Intermedio o Avanzado): "; cin >> dificultad;
    }

    int ptsUsua = 0, ptsMaqui = 0;

    if (dificultad == "Principiante" || dificultad == "principiante"){
        cout << "\nDificultad Principiante seleccionada" << endl; cout << "\nPuntaje: " << endl; cout << "Maquina:\t" << ptsMaqui << "\tJugador: " << ptsUsua << endl;
    }
    else if(dificultad == "Intermedio" || dificultad == "intermedio"){
        ptsMaqui = 1;
        cout << "\nDificultad Intermedia seleccionada" << endl; cout << "\nPuntaje: " << endl; cout << "Maquina: \t" << ptsMaqui << "\tJugador: " << ptsUsua << endl;
    }
    else if(dificultad == "Avanzado" || dificultad == "avanzado"){
        ptsMaqui = 2; 
        cout << "\nDificultad Avanzada seleccionada" << endl; cout << "\nPuntaje: " << endl; cout << "Maquina: \t" << ptsMaqui << "\tJugador: " << ptsUsua << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << "\nRonda " << (i + 1) << endl;
        string eleccionUsuario = elecUsua(), eleccionMaquina = elecMaqui();
        
        cout << "Seleccion de la maquina: " << eleccionMaquina << endl;
        string ganador = ganadorRonda(eleccionUsuario, eleccionMaquina);
        cout << "Gana la ronda: " << ganador << endl;

        if (ganador == "Usuario") {
            ptsUsua++;
        } else if (ganador == "Maquina") {
            ptsMaqui++;
        }
    }
    cout << "\nPuntajes finales: Usuario " << ptsUsua << " - Maquina " << ptsMaqui << endl; 
    ganadorJuego(ptsUsua, ptsMaqui); cout << endl;
}
int main()
{
    cout << "\n\t<<<Bienvenid@ al Juego de piedra, papel o tijera>>>" << endl;
    juego();

    return 0;
}