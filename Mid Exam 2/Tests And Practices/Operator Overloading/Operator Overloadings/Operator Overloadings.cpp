#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YouTubeChannel {
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    
    //ինչի համար ա սա
    /* Remove-ը, իրա մեջ պարունակում ա == օպերատորը, ու Remove
    օգտագործելիս պիտի սա էլ ունենանք գերբեռնած */
    /* Իսկ const-երը մեզ կտան գառանծյա, որ ստուգվող variable-ները, այս 
    դեպքում օբյեկտները, չեն փոխվի 
    /* var1 == var2
    1-ին const-ը var1-ի համար է, իսկ 2-րդը var2-ի */
    bool operator==(const YouTubeChannel&channel) const{
        return this->Name == channel.Name;
    }
};

//ավելացրել եմ ostream& և return COUT; որ կարողանամ անել cout << yt1 << yt1;
ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
    COUT << "Name: " << ytChannel.Name << "\n";
    COUT << "Subscribers: " << ytChannel.SubscribersCount << "\n";
    return COUT;
}

struct MyCollection {
    list<YouTubeChannel> myChannels;

    void operator+=(YouTubeChannel& channel) {
        this->myChannels.push_back(channel);
    }
    void operator-=(YouTubeChannel& channel) {
        this->myChannels.remove(channel);
    }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << "\n";
    return COUT;
}

int main () {
    YouTubeChannel yt1 = YouTubeChannel("My first channel", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);

    cout << yt1 << yt2 << "\n";
    //կարող եմ անել նաև այսպես 
    operator<<(cout, yt1);
    cout << "\n\n";

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;

    cout << myCollection;
    
    return 0;
}