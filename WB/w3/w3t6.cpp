#include <iostream>
#include <string>

using namespace std;

class ReversibleString{
    public:
        ReversibleString(const string& message){
            field = message;
        }
        ReversibleString() {
            field = "";
        }

        void Reverse(){
            string sample = "";
            for(int i= field.size() - 1; i>=0; i--){
                sample += field[i];
            }
            field = sample;

        }

        string ToString() const {
            return field;
        }



    private:
        string field;
};

int main() {
  ReversibleString s("live");
  s.Reverse();
  cout << s.ToString() << endl;
  
  s.Reverse();
  const ReversibleString& s_ref = s;
  string tmp = s_ref.ToString();
  cout << tmp << endl;
  
  ReversibleString empty;
  cout << '"' << empty.ToString() << '"' << endl;
  
  return 0;
}