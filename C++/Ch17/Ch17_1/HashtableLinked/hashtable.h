#ifndef HASHTABLE_H
#define HASHTABLE_H
#define PRIME_NUMBER 10
#include"../Node/Node.h"
#include"../Node/Node.cpp"
#include<string>
using std::string;
namespace DataStructNS{
    
    class Hashtable{
        public:
            Hashtable();
            virtual ~Hashtable();
            void put(const string& str);
            bool containsString(const string& str);
        private:
            int hashFunction(const string& str);
            Node<string>* table[PRIME_NUMBER];
    };
}
#endif