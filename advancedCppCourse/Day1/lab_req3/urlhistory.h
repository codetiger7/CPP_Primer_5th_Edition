#ifndef URLHISTORY_H
#define URLHISTORY_H

#include <vector>
#include <url.h>
#include <string>


class UrlHistory
{
public:
   UrlHistory(const unsigned maxHistoryLength = 5);

   bool storeUrl(const Url& url);
   void displayUrls();

private:
   //std::vector<Url> urlStorage;
   unsigned size_;
   const unsigned maxSize_;
   Url* urlArray;
};


#endif // URLHISTORY_H
