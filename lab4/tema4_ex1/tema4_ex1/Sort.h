class Sort
{
    int* list;
    int n;
    
public:
    Sort(int n, int min, int max);
    Sort(); 
    Sort(int* list, int n);
    Sort(int n, ...);
    Sort(char* s);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print() const;
    int GetElementsCount() const;
    int GetElementFromIndex(int index) const;
};
