#pragma once
#include "Storage/Storage.hpp"
#include <shared_mutex>
#include <unordered_map>
namespace kichi::storage {
class KeyValueStore final : public Storage {
 std::unordered_map<std::string,std::string> storage_;
 mutable std::shared_mutex mutex_;
public:
 void put(const std::string&,const std::string&) override;
 void remove(const std::string&) override;
 std::optional<std::string> pop(const std::string&) override;
 bool contains(const std::string&) const override;
 std::size_t size() const override;
 void clear() override;
 std::optional<std::string> get(const std::string&) const override;
 bool isEmpty() const override;
};}
