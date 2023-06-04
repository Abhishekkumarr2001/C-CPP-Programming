#include <bits/stdc++.h>
using namespace std;
struct MinHeapNode
{
    char Data;
    unsigned Frequency;
    MinHeapNode *L, *R;
    MinHeapNode(char Data, unsigned Frequency)
    {
        L = R = NULL;
        this->Data = Data;
        this->Frequency = Frequency;
    }
};

struct Compare
{
    bool operator()(MinHeapNode *l, MinHeapNode *r)
    {
        return (l->Frequency > r->Frequency);
    }
};

void Display(struct MinHeapNode *root, string str)
{
    if (!root)
        return;
    if (root->Data != '$')
        cout << root->Data << " : " << str << endl;
    Display(root->L, str + "0");
    Display(root->R, str + "1");
}

void HuffmanCodes(char Data[], int Frequency[], int size)
{
    struct MinHeapNode *L, *R, *top;
    priority_queue<MinHeapNode *, vector<MinHeapNode *>, Compare> minHeap;
    for (int i = 0; i < size; i++)
        minHeap.push(new MinHeapNode(Data[i], Frequency[i]));
    while (minHeap.size() != 1)
    {
        L = minHeap.top();
        minHeap.pop();
        R = minHeap.top();
        minHeap.pop();
        top = new MinHeapNode('$', L->Frequency + R->Frequency);
        top->L = L;
        top->R = R;
        minHeap.push(top);
    }
    Display(minHeap.top(), "");
}
int main()
{
    int size;
    cout << "\n\nEnter the Size : ";
    cin >> size;
    int frequency[size];
    char Array[size];
    cout << "\nEnter Characters and their and Frequency :\n";
    for (int i = 0; i < size; i++)
    {
        cin >> Array[i];
        cin >> frequency[i];
    }
    HuffmanCodes(Array, frequency, size);
    return 0;
}
