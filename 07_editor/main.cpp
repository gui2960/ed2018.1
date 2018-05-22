#include <iostream>
#include <list>
#include <sstream>
#include <SFML/Graphics.hpp>
#include "sftext.h"
using namespace std;

struct Ambiente{
    list<char> texto;
    list<char>::iterator cursor;
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
    list<Ambiente> la;// -- para voltar e ++ para ir pra frente
    Ambiente amb;
    la.push_back(amb);

    list<Ambiente>::iterator atual;
    atual = la.begin();

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
                    if(atual!=la.begin())
                        atual--;

                }
                else if(event.key.code == sf::Keyboard::R){
                    if(event.key.control)
                        cout << "control r" << endl;
                    if(atual!=la.end())
                        atual++;
                }
                else if((event.key.code >= sf::Keyboard::A) &&
                   (event.key.code <= sf::Keyboard::Z)){
                   char tecla = (event.key.code - sf::Keyboard::A) + 'a';
                    if(event.key.shift)
                    tecla+= 'a' + 'A';
                    la.erase(++atual,)
                    la.push_back(*atual);
                    atual == --la.end();
                    atual->texto.insert(atual->cursor, tecla);

                }
                else if((event.key.code == sf::Keyboard::Space)){
                    atual->texto.insert(atual->cursor, ' ');
                    cout << "espaco" << endl;

                }
                else if(event.key.code == sf::Keyboard::BackSpace){
                    cout << "backspace" << endl;
                    if(atual->cursor != atual->texto.begin())
                        atual->cursor = atual->texto.erase(--atual->cursor);


                }
                else if(event.key.code == sf::Keyboard::Delete){
                    if(atual->cursor != atual->texto.end())
                    atual->cursor = atual->texto.erase(atual->cursor++);
                    cout << "delete" << endl;

                }
                else if(event.key.code == sf::Keyboard::Left){
                    if(atual->cursor!= atual->texto.begin())
                        atual->cursor--;

                }
                else if(event.key.code == sf::Keyboard::Right){
                    if(atual->cursor!= atual->texto.end())
                        atual->cursor++;
                }
                else if(event.key.code == sf::Keyboard::Comma){
                        atual->texto.push_back(',');
                }
                else if(event.key.code == sf::Keyboard::Dash){
                        atual->texto.push_back('-');
                }
                else if(event.key.code == sf::Keyboard::Slash){
                        atual->texto.push_back('/');
                }
                else if(event.key.code == sf::Keyboard::LBracket){
                        atual->texto.push_back('{');
                }
                else if(event.key.code == sf::Keyboard::RBracket){
                        atual->texto.push_back('}');
                }
                else if(((event.key.code >= sf::Keyboard::Num0) && (event.key.code >= sf::Keyboard::Num9)) || ((event.key.code >= sf::Keyboard::Numpad0) && (event.key.code >= sf::Keyboard::Numpad9))){
                        char numero = (event.key.code - sf::Keyboard::Numpad0) + '0';
                        atual->texto.push_back(numero);
                }

            }
        }

        auto pos = sf::Vector2f(30, 50);
       janela.clear();
        janela.draw(sfText(pos, atual->toString(), sf::Color::White, 30));
        janela.display();
    }
    return 0;

}





