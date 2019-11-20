<?php
$z[0]=Array("field","",304,323);
$z[0][4]['name']="title";
$z[1]=Array("global","",324,350);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",391,420);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",460,518);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3510,3545);
$z[4][4]['filename']="head.htm";
$z[5]=Array("list","\r\n                      [field:global runphp='yes' name=autoindex]\r\n                        \$a=\"\r\n                        <li class='col-4-1 last not-animated' data-animate='fadeInUp'>\";\r\n                          \$b=\"\r\n                        \r\n                        <li class='col-4-1 not-animated' data-animate='fadeInUp'>\";\r\n                          if ((@me%4)==0 && @me!=16)  @me=\$a;\r\n                          else  @me=\$b;\r\n                        [/field:global]\r\n                        <div class=\"product-item\">\r\n                          <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" /></a></div>\r\n                          <div class=\"portfolio-title\">\r\n                            <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                          </div>\r\n                        </div>\r\n                      </li>\r\n                     ",5700,6696);
$z[5][4]['pagesize']="12";
$z[6]=Array("pagelist","",6931,6997);
$z[6][4]['listitem']="index,end,pre,next,pageno";
$z[6][4]['listsize']="2";
$z[7]=Array("include","",7361,7398);
$z[7][4]['filename']="footer.htm";
$z[8]=Array("include","",7595,7631);
$z[8][4]['filename']="right.htm";

?>