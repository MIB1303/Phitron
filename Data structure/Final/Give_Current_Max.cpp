#include <bits/stdc++.h>
using namespace std;

class Learner
{
public:
    string fullName;
    int id;
    int score;
    Learner(string fullName, int id, int score)
    {
        this->fullName = fullName;
        this->id = id;
        this->score = score;
    }
};

class CompareLearner
{
public:
    bool operator()(const Learner &x, const Learner &y)
    {
        if (x.score != y.score)
        {
            return x.score < y.score;
        }
        return x.id > y.id;
    }
};

void removeInvalid(priority_queue<Learner, vector<Learner>, CompareLearner> &heap, unordered_set<int> &removed)
{
    while (!heap.empty() && removed.count(heap.top().id))
    {
        heap.pop();
    }
}

void showTop(priority_queue<Learner, vector<Learner>, CompareLearner> &heap, unordered_set<int> &removed)
{
    removeInvalid(heap, removed);

    if (heap.empty())
    {
        cout << "Empty\n";
    }
    else
    {
        Learner topStudent = heap.top();
        cout << topStudent.fullName << " " << topStudent.id << " " << topStudent.score << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int total;
    cin >> total;
    priority_queue<Learner, vector<Learner>, CompareLearner> heap;
    unordered_set<int> removed;

    for (int i = 0; i < total; i++)
    {
        string name;
        int rollNo, marks;
        cin >> name >> rollNo >> marks;
        heap.push(Learner(name, rollNo, marks));
    }

    int queries;
    cin >> queries;
    while (queries--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            string name;
            int rollNo, marks;
            cin >> name >> rollNo >> marks;
            heap.push(Learner(name, rollNo, marks));
            showTop(heap, removed);
        }
        else if (type == 1)
        {
            showTop(heap, removed);
        }
        else if (type == 2)
        {
            removeInvalid(heap, removed);
            if (!heap.empty())
            {
                removed.insert(heap.top().id);
                heap.pop();
            }
            showTop(heap, removed);
        }
        else
        {
            cout << "Empty\n";
        }
    }

    return 0;
}
