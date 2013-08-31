#include <vector>
#include <iostream>

/* (6) */
template<class T>
class Set{
  std::vector<T> data;
  int end;
public:
  Set():end(0){}
  ~Set();
  void add(const T&);
  T value() const;
  void remove(const T&);
  class iterator;
  friend class iterator;
  class iterator{
    Set& s;
    int index;
  public:
    iterator(Set& is):s(is),index(0){}
    iterator(Set& is, bool):s(is),index(s.end){}
    T operator*() const { return s.data[index];}
    
    iterator& operator ++(int){ index++;}
    bool operator<(const iterator& rv) const{
      return index < rv.index;
    }
  };
  iterator begin(){return iterator(*this);}
  iterator last(){return iterator(*this,true);}
};

template<class T>
Set<T>::~Set(){
  end=0;
  data.clear();
}

template<class T>
void Set<T>::add(const T&a){
  for(int i=0;i<end;i++)
    if (a == data[i]){
       std::cout<<a<<" is found"<<std::endl; 
      return;
    }
  end++;
  data.push_back(a);
}

template<class T>
void Set<T>::remove(const T&a){
  for(int i=0;i<end;i++)
    if (a == data[i]){
      data.erase(data.begin()+i);
      end--;
      return;
    }
  std::cout<<a<<" is not found"<<std::endl;
}

void sub6();
