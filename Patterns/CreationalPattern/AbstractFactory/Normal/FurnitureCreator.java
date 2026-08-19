public class FurnitureCreator {
     
    public Chair createChair(String style) {
    
        if (style.equals("modern")) {
            return new ModernChair();
        } else if(style.equals("victorian")) {
            return new VictorianChair();
        }

        throw new IllegalArgumentException("Unknown style: " + style);
    }
    
    public Table createTable(String style) {
        if(style.equals("modern")) {
            return new ModernTable();
        }
        else if(style.equals("victorian")) {
            return new VictorianTable();
        }

        throw new IllegalArgumentException("Unknown style: " + style);
    }
}
