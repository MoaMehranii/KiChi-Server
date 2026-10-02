#include "Storage/KeyValueStore.hpp"
#include <mutex>
namespace kichi::storage {
void KeyValueStore::put(const std::string& k,const std::string& v){std::unique_lock lock(mutex_);storage_[k]=v;}
void KeyValueStore::remove(const std::string& k){std::unique_lock lock(mutex_);storage_.erase(k);}
std::optional<std::string> KeyValueStore::pop(const std::string& k){std::unique_lock lock(mutex_);auto i=storage_.find(k);if(i==storage_.end())return std::nullopt;auto v=i->second;storage_.erase(i);return v;}
bool KeyValueStore::contains(const std::string& k)const{std::shared_lock lock(mutex_);return storage_.find(k)!=storage_.end();}
std::size_t KeyValueStore::size()const{std::shared_lock lock(mutex_);return storage_.size();}
void KeyValueStore::clear(){std::unique_lock lock(mutex_);storage_.clear();}
std::optional<std::string> KeyValueStore::get(const std::string& k)const{std::shared_lock lock(mutex_);auto i=storage_.find(k);if(i==storage_.end())return std::nullopt;return i->second;}
bool KeyValueStore::isEmpty()const{std::shared_lock lock(mutex_);return storage_.empty();}
}
