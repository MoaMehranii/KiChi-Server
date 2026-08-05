package Storage;

import java.util.concurrent.ConcurrentHashMap;

public class KeyValueStore implements Storage {
 private final ConcurrentHashMap<String , String> storage = new ConcurrentHashMap<>();
 @Override
 public void put(String a , String b ){
  storage.put(a , b);
 }
 @Override
 public void remove(String a) {
  storage.remove(a);
 }
 @Override
 public String pop(String a) {
  return storage.remove(a);
 }
 @Override
 public boolean contains(String a){
  return storage.containsKey(a);
 }
 @Override
 public int size(){
  return storage.size();
 }
 @Override
 public void clear(){
  storage.clear();
 }
 @Override
 public String get(String a){
  return storage.get(a);
 }
 @Override
 public boolean isEmpty(){
  return storage.isEmpty();
 }

}
