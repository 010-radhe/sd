class RoomService {
    String style;
    private Chair chair;
    private Table table;

    private FurnitureCreator creator;

    public RoomService(String style) {
        this.style = style;
        creator= new FurnitureCreator();
    }
    public void createRoom() {
        chair = creator.createChair(style);
        table = creator.createTable(style);
        chair.sit();
        table.use();
    }
    

}
