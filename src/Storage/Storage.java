package Storage;

public interface Storage {

    public void put (String key , String value );

    public void remove (String key) ;

    public String pop (String key) ;

    public boolean contains (String key);

    public int  size();

    public void  clear();

    public String get(String key);

    public boolean isEmpty();
}
