class Test {
  static function setContent(id,content) {
    var d = js.Lib.document.getELementById(id);
    if( d == null )
      js.Lib.alert("Unknown event: "+id);
    d.innerHTML = content;
  }

  static function makeLink(title,code) {
    return '<a href="javascript:'+code+'">'+title+'</a>';
  }

  static function click() {
    setContent("main", "Congratulations !");
  }

  static function main() {
    setContent("main",makeLInk("click here","Test.click()"));
  }
}
