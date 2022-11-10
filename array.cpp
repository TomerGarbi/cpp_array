#include<iostream>


template<typename T, size_t S> class Array
{
    private:
        T data[S];

    public:
        constexpr size_t const size()
        {
            return S;
        }

        T& operator[](int i)
        {
            return data[i];
        }

        const T& operator[](int i) const
        {
            return data[i];
        }

        T* Data()
        {
            return data;
        }
        const T* Data() const
        {
            return data;
        }


};


int main()
{
    Array<int, 5> arr;
    arr[0] = 1;
    for(size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}