#include "urlhistory.h"
#include <algorithm>
#include <iostream>

UrlHistory::UrlHistory(const unsigned maxHistoryLength)
   :size_(0)
   , maxSize_(maxHistoryLength)
{
   urlArray = new Url[maxSize_];
}

bool UrlHistory::storeUrl(const Url& url)
{
   if (maxSize_ >= size_)
   {
      auto pos = std::find(urlArray, (urlArray + maxSize_), url);

      if (pos == (urlArray + maxSize_))
      {
         urlArray[size_] = url;
         ++size_;

         return true;
      }
   }

   return false;
}

void UrlHistory::displayUrls()
{
   for (unsigned i = 0; i != maxSize_; ++i)
   {
      std::cout << urlArray[i].getResource() << std::endl;
   }
}

