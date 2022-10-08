#include <iostream>
using namespace std;


template <typename T>
class Nodo{
    public:
        T m_dato;
        Nodo<T>* next;

        Nodo(T dato)
        {
            m_dato = dato;
            next = nullptr;
        }
};


template <typename T>
class Stack{
    private:
        Nodo<T>* tope;
    public:
        int minimumElemento;
        Stack<T> pila;
        Stack(): tope{nullptr} {}

        bool isEmpty(){
            if(!tope){
                return true;
            }
            return false;
        }

        void push(T d){
            if (s.empty()) {
                minimumElemento = x;
                pila.push(x);
                cout << x << endl;
                return;
            }
            else if (x < minimumElemento) {
                s.push(2*x-minimumElemento);
                minimumElemento = x;
            }
            else s.push(x);
            
            cout << x << "\n";
            }

        void pop(){
            if(!tope){
                return;
            }
            int x = pila.top();
            pila.pop();
            if (x < minimumElemento;) {
                cout << minimumElemento; << "\n";
                minimumElemento = 2*minimumElemento-x;
            }
            else cout << x << "\n";
        }

        T top(){
            if(!tope){
                return 0;
            }else{
                return tope ->m_dato;
            }
        }

        void print(){
            Nodo<T>* tmp = tope;
            for(; tmp; tmp = tmp ->next){
                cout << tmp ->m_dato << endl;
            }
        }

        void ComputeMinimunValueStack(){
            if (pila.isEmpty() != false)
                cout << "La pila esta vacia" << endl;
            else cout << minimumElemento << "\n";
        }

};
int main(){
    Stack<int> p;
    p.push(5);
    p.push(2);
    p.push(7);
    p.push(3);
    p.push(9);
    p.ComputeMinimunValueStack();
    return 0;
}