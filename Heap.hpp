#include <vector>

template <typename T>
class Heap : public std::vector<T> {
	private:
		void heapify(int i) {
			int l = 2*i+1;
			int r = 2*i+2,g;
			T aux;
			if(l<this->size()&&(*this)[i]<(*this)[l])
				g = l;
			else
				g = i;
			if(r<this->size()&&(*this)[g]<(*this)[r])
				g = r;
			while(g!=i) {
				aux = (*this)[i];
				(*this)[i] = (*this)[g];
				(*this)[g] = aux;
				i = g;
				l = 2*g+1;
				r = 2*g+2;
				if(l<this->size()&&(*this)[i]<(*this)[l])
					g = l;
				else
					g = i;
				if(r<this->size()&&(*this)[g]<(*this)[r])
					g = r;
			}
		}

	public:
		const T& top() {
			return (*this)[0];
		}

		void push(const T& val) {
			this->push_back(val);
			int p,c = this->size()-1;
			T aux;
			for(p=(c-1)/2;p>=0&&(*this)[p]<(*this)[c];p=(c-1)/2) {
				aux = (*this)[p];
				(*this)[p] = (*this)[c];
				(*this)[c] = aux;
				c = p;
			}
		}

		void pop() {
			(*this)[0] = (*this)[this->size()-1];
			this->pop_back();
			heapify(0);
		}

		void makeHeap() {
			for(int i=this->size()/2-1;i>=0;--i)
				heapify(i);
		}
};