#pragma once
#include <cstddef>
#include <optional>
#include <string>
namespace kichi::storage {
class Storage {
public:
 virtual ~Storage() = default;
 virtual void put(const std::string&, const std::string&) = 0;
 virtual void remove(const std::string&) = 0;
 virtual std::optional<std::string> pop(const std::string&) = 0;
 virtual bool contains(const std::string&) const = 0;
 virtual std::size_t size() const = 0;
 virtual void clear() = 0;
 virtual std::optional<std::string> get(const std::string&) const = 0;
 virtual bool isEmpty() const = 0;
};}
