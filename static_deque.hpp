#ifndef STATIC_DEQUE_HPP
#define STATIC_DEQUE_HPP

template<typename T>
class static_Deque
{

public:

	explicit static_Deque(size_t);

	static_Deque(const static_Deque<T>&);
	static_Deque<T>& operator=(const static_Deque<T>&);

	bool empty()const;
	bool full()const;

	const T& front()const;
	const T& back()const;


	void pop();
	void push(const T&);
	void pop_back();
	void push_front(const T&);
	~static_Deque();

private:

	 T* elemnts;

	 size_t bgn,end, Tmax;




};


#endif
