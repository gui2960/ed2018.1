#include <iostream>
#include <list>
#include <sstream>
#include <SFML/Graphics.hpp>
#include "sftext.h"
#import <
using namespace std;

struct Ambiente{
    list<char> texto;
    list<char>::iterator cursor;
    list<Ambiente> atual;// -- para voltar e ++ para ir pra frente
    Ambiente(){
        cursor = texto.end();
    }

    string toString(){
        stringstream ss;
        for(auto it = texto.begin(); it != texto.end(); it++){
            if(it == cursor)
                ss << "#";
            ss << (*it);
        }
        if(cursor == texto.end())
            ss << "#";
        return ss.str();
    }
};

int main()
{
    Ambiente amb;

    sf::RenderWindow janela(sf::VideoMode(800, 600), "Janela");

    while(janela.isOpen()){

        sf::Event event;
        while(janela.pollEvent(event)){
            if(event.type == sf::Event::Closed)
                    janela.close();
            if(event.type == sf::Event::KeyPressed){
                if(event.key.code == sf::Keyboard::Z){
                    if(event.key.control)
                        cout << "control z" << endl;
                    amb.atual.back();
                }
                else if(event.key.code == sf::Keyboard::R){
                    if(event.key.control)
                        cout << "control r" << endl;
                }
                else if((event.key.code >= sf::Keyboard::A) &&
                   (event.key.code <= sf::Keyboard::Z)){
                   char tecla = (event.key.code - sf::Keyboard::A) + 'a';

                    cout << tecla << endl;

                    amb.texto.insert(amb.cursor, tecla);
                    atual.push_back(amb.texto.insert(amb.cursor, tecla));


                }
                else if((event.key.code == sf::Keyboard::Space)){
                    amb.texto.insert(amb.cursor, ' ');
                    cout << "espaco" << endl;

                }
                else if(event.key.code == sf::Keyboard::BackSpace){
                    cout << "backspace" << endl;
                    amb.texto.erase(amb.cursor--);


                }
                else if(event.key.code == sf::Keyboard::Delete){
                    amb.texto.erase(amb.cursor++);
                    cout << "delete" << endl;

                }
                else if(event.key.code == sf::Keyboard::Left){
                        amb.cursor--;

                }
                else if(event.key.code == sf::Keyboard::Right){
                        amb.cursor++;
                }
                else if(event.key.code == sf::Keyboard::Comma){
                        amb.texto.push_back(',');
                }
                else if(event.key.code == sf::Keyboard::Dash){
                        amb.texto.push_back('-');
                }
                else if(event.key.code == sf::Keyboard::Slash){
                        amb.texto.push_back('/');
                }
                else if(event.key.code == sf::Keyboard::LBracket){
                        amb.texto.push_back('{');
                }
                else if(event.key.code == sf::Keyboard::RBracket){
                        amb.texto.push_back('}');
                }
                else if(((event.key.code >= sf::Keyboard::Num0) && (event.key.code >= sf::Keyboard::Num9)) || ((event.key.code >= sf::Keyboard::Numpad0) && (event.key.code >= sf::Keyboard::Numpad9))){
                        char numero = (event.key.code - sf::Keyboard::Numpad0) + '0';
                        amb.texto.push_back(numero);
                }

            }
        }

        auto pos = sf::Vector2f(30, 50);
       janela.clear();
        janela.draw(sfText(pos, amb.toString(), sf::Color::White, 30));
        janela.display();
    }
    return 0;

}





