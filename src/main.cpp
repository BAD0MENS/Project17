#include "my_labs.h"

// cmake 
// github
// פאיכ readme

int main() {

    Queue<Point> pointQueue;
    pointQueue.enque({ 1, 2, 3 });
    pointQueue.enque({ 4, 5, 6 });

    cout << "Queue of points: " << pointQueue << endl;

    cout << "Queue size: " << pointQueue.size() << endl;

    pointQueue.deque();
    cout << "Queue of points after deleting: " << pointQueue << endl;

    pointQueue.clear();
    cout << "Queue of points after clearing: " << pointQueue << endl;

    return 0;
}
