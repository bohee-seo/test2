Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(18);

	web_url("v1", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$ct=application/x-protobuf&key=AIzaSyC7jsptDS3am4tPx4r3nxis7IMjBc5Dovo&$httpMethod=POST&$req=ChUKE25hdmNsaWVudC1hdXRvLWZmb3gaJwgFEAEaGwoNCAUQBhgBIgMwMDEwARCm3g0aAhgLKRO7DSICIAIoARonCAEQARobCg0IARAGGAEiAzAwMTABEPTJChoCGAuKnyujIgIgAigBGicIAxABGhsKDQgDEAYYASIDMDAxMAEQ4I8KGgIYC5jy4ZIiAiACKAEaJwgHEAEaGwoNCAcQBhgBIgMwMDEwARCihAsaAhgLcZA_zCICIAIoARolCAkQARoZCg0ICRAGGAEiAzAwMTABECAaAhgLU90r9yICIAIoAQ==", "Referer=", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("www.naver.com", 
		"URL=https://www.naver.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.pstatic.net/tveta/libs/assets/js/pc/main/min/pc.veta.core.min.js", ENDITEM, 
		"Url=https://ssl.pstatic.net/tveta/libs/ndpsdk/prod/ndp-loader.js", ENDITEM, 
		"Url=https://pm.pstatic.net/dist/js/preload.b0b0a351.js?o=www", ENDITEM, 
		"Url=https://pm.pstatic.net/dist/js/external.a0729675.js?o=www", ENDITEM, 
		"Url=https://ssl.pstatic.net/tveta/libs/glad/prod/gfp-core.js", ENDITEM, 
		"Url=https://ssl.pstatic.net/sstatic/search/pc/css/sp_autocomplete_210318.css", ENDITEM, 
		"Url=https://pm.pstatic.net/dist/css/nmain.20220331.css", ENDITEM, 
		"Url=https://pm.pstatic.net/dist/js/polyfill.ba1684f4.js?o=www", ENDITEM, 
		"Url=/favicon.ico?1", ENDITEM, 
		"Url=https://pm.pstatic.net/dist/js/vendors~more~nmain~sidebar_notice.1cb39634.js?o=www", ENDITEM, 
		"Url=https://pm.pstatic.net/dist/js/search.a46266a0.js?o=www", ENDITEM, 
		"Url=https://ssl.pstatic.net/tveta/libs/ndpsdk/prod/ndp-core.js", ENDITEM, 
		"Url=https://pm.pstatic.net/dist/js/nmain.8c6518f6.js?o=www", ENDITEM, 
		"Url=https://pm.pstatic.net/dist/js/vendors~more~nmain~notice~search~sidebar_notice.349d5f0e.js?o=www", ENDITEM, 
		"Url=https://happybean-phinf.pstatic.net/20220324_26/1648084121948sU11D_JPEG/th.jpg?type=f464_260", ENDITEM, 
		"Url=https://happybean-phinf.pstatic.net/20220308_80/1646721435840igk1U_JPEG/n_mm.jpg?type=f464_260", ENDITEM, 
		"Url=https://happybean-phinf.pstatic.net/20220411_140/1649652955294ApvpM_JPEG/%A5%EC%B4%ED%B5%EB_%2844%29.jpg?type=f464_260", ENDITEM, 
		"Url=https://happybean-phinf.pstatic.net/20220308_87/1646726555986hL6jA_JPEG/%B8%EB%A4%EC1.jpg?type=f464_260", ENDITEM, 
		"Url=https://happybean-phinf.pstatic.net/20220411_44/1649665244500UCVFR_JPEG/EBA1ACEDBCECA4ED-28429.jpg?type=f464_260", ENDITEM, 
		LAST);

	web_url("tiles", 
		"URL=https://contile.services.mozilla.com/v1/tiles", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/95.0.2/20211218203254/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%2010.0.0.0.19042.1586%20(x64)/ISET:SSE4_2,MEM:65282/default/default/update.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0C\\xE6\\xB5\\xFD\\x8F\\xB1\\xB0|\\xD4\\xD5L\\xAE\\xFEM\\xBFW", 
		LAST);

	lr_think_time(4);

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03+\\x06\\x83/\\xC8\\xCE\\xE1\\xA9\\xDB2,g3\\xC1w\\x0FI", 
		LAST);

	lr_think_time(4);

	web_custom_request("gts1c3", 
		"URL=http://ocsp.pki.goog/gts1c3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x13+M\\x14Y\\xB2\\x93P\\x12\\x00\\x00\\x00\\x00\\x05\\xF1\\x85", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03<\\xB3\\x95\\x98o\\xDB\\xF5\\x8E\\xE5\\x82\\xA5\\xEB\\xB3s\\xA5", 
		LAST);

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x07\\x01\\xCE\\x8F\\xC6\\x8DJ\\x83\\xD8\\x81\\xDB\\x18\\xC5\\xB2<\\xD0", 
		LAST);

	web_custom_request("status.geotrust.com", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\x98\\x8A\\x98\\xFB\\x10\\x952\\x05\\xA0\\x8A\\xF5\\xB7m~", 
		LAST);

	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02V\\xC9\\xFA\\x9DAw\\xEFw?\\x8D\\xEF\\xC4\\x83xQ", 
		LAST);

	lr_think_time(5);

	web_custom_request("gts1c3_2", 
		"URL=http://ocsp.pki.goog/gts1c3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\xC7.y\\x8A\\xDD\\xFFa4\\xB3\\xBA\\xEDGB\\xB8\\xBB\\xC6\\xC0$\\x07c\\x04\\x14\\x8At\\x7F\\xAF\\x85\\xCD\\xEE\\x95\\xCD=\\x9C\\xD0\\xE2F\\x14\\xF3q5\\x1D'\\x02\\x10\\x13+M\\x14Y\\xB2\\x93P\\x12\\x00\\x00\\x00\\x00\\x05\\xF1\\x85", 
		LAST);

	web_custom_request("ocsp.godaddy.com", 
		"URL=http://ocsp.godaddy.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0J0H0F0D0B0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\t\\x00\\xD7\\xE5\\xAAl\\xA5\\xF9\\xBE>", 
		LAST);

	web_custom_request("status.geotrust.com_2", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06B\\xF8_94\\xD0#+\\x1B\\x05\\x17\\xA6\\xE6\\xD9J", 
		LAST);

	web_custom_request("status.geotrust.com_3", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06B\\xF8_94\\xD0#+\\x1B\\x05\\x17\\xA6\\xE6\\xD9J", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_custom_request("status.geotrust.com_4", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06B\\xF8_94\\xD0#+\\x1B\\x05\\x17\\xA6\\xE6\\xD9J", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1649808068813\\\"\"},\"use_webpush\":true,\"uaid\":\"2682ade580b34ad0a4df63698ef7486f\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("status.geotrust.com_5", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\x98\\x8A\\x98\\xFB\\x10\\x952\\x05\\xA0\\x8A\\xF5\\xB7m~", 
		LAST);

	web_custom_request("ent-config", 
		"URL=https://whatfix.com/service/9ac8fa80-57d3-11ea-a224-bacbbe07b880/cconfig/ent-config", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("www.naver.com_2", 
		"URL=http://www.naver.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://happybean-phinf.pstatic.net/20220330_285/1648628848585RxRyr_JPEG/%ED%95%A8%EB%8B%A4%ED%98%81_(3).jpg?type=f464_260", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/dthumb.phinf/?src=%22https%3A%2F%2Fs.pstatic.net%2Fshop.phinf%2F20220406_81%2F1649237915469FOCI6_JPEG%2Fk.jpg%22&type=nf340_228", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/dthumb.phinf/?src=%22https%3A%2F%2Fs.pstatic.net%2Fshop.phinf%2F20220411_143%2F1649685412384gAkAL_JPEG%2F750_0.jpg%22&type=nf340_228", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/dthumb.phinf/?src=%22https%3A%2F%2Fs.pstatic.net%2Fshop.phinf%2F20220406_51%2F1649238215317vMqNI_JPEG%2Fruj6.jpg%22&type=nf340_228", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/dthumb.phinf/?src=%22https%3A%2F%2Fs.pstatic.net%2Fshop.phinf%2F20220412_287%2F1649772660469Oeeyy_JPEG%2F336_5.jpg%22&type=nf340_228", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/dthumb.phinf/?src=%22https%3A%2F%2Fs.pstatic.net%2Fshop.phinf%2F20220412_264%2F1649774326061uLzET_JPEG%2F750_1.jpg%22&type=nf340_228", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/dthumb.phinf/?src=%22https%3A%2F%2Fs.pstatic.net%2Fshop.phinf%2F20220412_212%2F1649770864789iksLX_JPEG%2F336_38.jpg%22&type=nf340_228", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/dthumb.phinf/?src=%22https%3A%2F%2Fs.pstatic.net%2Fshop.phinf%2F20220411_72%2F1649640699490Cx0GM_JPEG%2F336_1.jpg%22&type=nf340_228", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/dthumb.phinf/?src=%22https%3A%2F%2Fs.pstatic.net%2Fshop.phinf%2F20220411_119%2F164964072662282JCy_JPEG%2F336_1.jpg%22&type=nf340_228", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://static-whale.pstatic.net/main/img_sidebar_v3@2x.png", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://static-whale.pstatic.net/main/sprite-20211123@2x.png", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220408_20/34e46c06-0bff-4147-97af-ef0f85ff46d0.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/imgshopping/static/sb/shoppingbox/js/jquery/jquery-1.12.4.min_v1.js?v=2022030715", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220412_17/1cfc9ab7-2be3-48fe-8298-fff3849631b7.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220408_22/c5d3aaa7-5946-4c97-a196-89e4b4c2aca6.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220411_0/ddfcf6ed-632b-4804-940d-f8186f5f04ad.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220413_0/e3e5b585-3541-4576-9e8e-a0bdbb401a52.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220412_28/3091487c-495e-486e-b189-5b746e25bcd0.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20210812_11/56dd6298-c3d4-4c5b-ac28-99b8648bdd54.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220324_6/8757eba4-b64d-4f01-a9e7-918a5e6d12b5.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220411_4/690f27dc-d9fa-4912-857e-eef6089e2238.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220411_26/29199cc8-73a1-4a8b-80b6-98c820fc8713.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220407_21/43608b86-d308-4240-9077-145f647d33ba.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220411_28/e0d68dbf-ff7f-42f6-ad26-f8b69df3c4fb.jpg?type=f214_292", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20211112_0/1e10d8ee-db6f-4c82-9e2e-ee026d2c9942.jpg", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/shopping.phinf/20220407_11/54deb255-39fb-4db6-95d1-36cf71788023.jpg", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/imgshopping/static/sb/shoppingbox/js/sb/nclkS02_v1.js?v=2022030715", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://l.www.naver.com/l?SOU&svcOnList=&act=PC.lcs&ts=1649841344510&svr=%3C!--cvweb02--%3E&EOU", "Referer=https://www.naver.com/", ENDITEM, 
		"Url=https://s.pstatic.net/imgshopping/static/sb/shoppingbox/js/sb/shopboxS05_v3.js?v=2022030715", "Referer=https://www.naver.com/", ENDITEM, 
		LAST);

	web_url("targetAndPanels.json", 
		"URL=https://www.naver.com/include/themecast/targetAndPanels.json", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://s.pstatic.net/static/www/img/uit/sp_weather_time_5f2bbb.png", "Referer=https://pm.pstatic.net/dist/css/nmain.20220331.css", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com_5", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xFA9\\x02!\\xF0+}\\x04\\xCA \\xBD\\xB2u\\xF2\\xEC", 
		LAST);

	web_custom_request("ocsp.digicert.com_6", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xFA9\\x02!\\xF0+}\\x04\\xCA \\xBD\\xB2u\\xF2\\xEC", 
		EXTRARES, 
		"Url=https://s.pstatic.net/static/www/img/uit/sp_main_dba1af.png", "Referer=https://pm.pstatic.net/dist/css/nmain.20220331.css", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_url("main.nhn", 
		"URL=https://www.naver.com/shoppingbox/shoppingboxnew/main.nhn?domain=N", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_7", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x05u\\xB5\\x1C\\xCB%\\xFC\\x9C\\xEF\\xCBnc\\xFE\\x1AE)", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("fxshow", 
		"URL=https://siape.veta.naver.com/fxshow?su=SU10803&nrefreshx=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("status.geotrust.com_6", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x08\\xCF\\xB8$f\\xFF\\xA5\\x94H1\\xEB\\x85\\xD6.Dw", 
		EXTRARES, 
		"Url=https://s.pstatic.net/static/www/img/uit/2021/sp_shop_bffdc9.png", "Referer=https://s.pstatic.net/imgshopping/static/sb/shoppingbox/css/shopboxR0014_v6.css?v=2022030715", ENDITEM, 
		LAST);

	web_url("favoriteMeta.json", 
		"URL=https://www.naver.com/include/favorite/favoriteMeta.json", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("m", 
		"URL=https://lcs.naver.com/m", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=u=https%3A%2F%2Fwww.naver.com%2F&e=&os=Win32&ln=en-US&sr=1920x1200&pr=1&bw=1287&bh=1109&c=24&j=N&k=Y&i=&navigationStart=1649841294019&fetchStart=1649841294620&domainLookupStart=1649841294676&domainLookupEnd=1649841294692&connectStart=1649841308063&connectEnd=1649841317529&secureConnectionStart=1649841312645&requestStart=1649841317550&responseStart=1649841317594&responseEnd=1649841322142&domLoading=1649841322278&domInteractive=1649841337322&domContentLoadedEventStart=1649841342598&"
		"domContentLoadedEventEnd=1649841342600&domComplete=1649841344508&loadEventStart=1649841344508&loadEventEnd=1649841344509&first-contentful-paint=43508&pan=LIVINGHOME&pid=877e5f81abda325a7067db6a5290bfc6&ts=1649841344560&EOU", 
		LAST);

	web_url("fxview", 
		"URL=https://siape.veta.naver.com/fxview?eu=EU10043151&calp=-&oj=Gdl%2FoFAYTRkAyd8h7aqH5N4QML%2FQe5c4cBL68IAEamROeyB5RSXlnJVXuXnWDXG8szS0XD7EPuk&ac=8524851&src=5714239&evtcd=P100&x_ti=1434&tb=&oid=&sid1=&sid2=&rk=b6e3e2e88ea94d941d7d3532313f629a&eltts=lO%2BNXtdHMBFqhWJvAyirPg%3D%3D&brs=Y&&eid=V800&dummy=0.5716010018267605", 
		"Resource=0", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fxshow_2", 
		"URL=https://siape.veta.naver.com/fxshow?su=SU10641&nrefreshx=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fxshow_3", 
		"URL=https://siape.veta.naver.com/fxshow?su=SU10640&nrefreshx=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fxshow_4", 
		"URL=https://siape.veta.naver.com/fxshow?su=SU10642&nrefreshx=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fxview_2", 
		"URL=https://siape.veta.naver.com/fxview?eu=EU10043151&calp=-&oj=Gdl%2FoFAYTRkAyd8h7aqH5N4QML%2FQe5c4cBL68IAEamROeyB5RSXlnJVXuXnWDXG8szS0XD7EPuk&ac=8524851&src=5714241&evtcd=FOCUS_IMP&x_ti=1434&tb=&oid=&sid1=&sid2=&rk=b6e3e2e88ea94d941d7d3532313f629a&eltts=lO%2BNXtdHMBFqhWJvAyirPg%3D%3D&brs=Y&&eid=V810&dummy=0.9348108802068142", 
		"Resource=0", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fxview_3", 
		"URL=https://siape.veta.naver.com/fxview?eu=EU10043151&calp=-&oj=Gdl%2FoFAYTRkAyd8h7aqH5N4QML%2FQe5c4cBL68IAEamROeyB5RSXlnJVXuXnWDXG8szS0XD7EPuk&ac=8524851&src=5714240&evtcd=C1073&x_ti=1434&tb=&oid=&sid1=&sid2=&rk=b6e3e2e88ea94d941d7d3532313f629a&eltts=lO%2BNXtdHMBFqhWJvAyirPg%3D%3D&brs=Y&&eid=V810&dummy=0.13981641560574332", 
		"Resource=0", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fxview_4", 
		"URL=https://siape.veta.naver.com/fxview?eu=EU10043151&calp=-&oj=Gdl%2FoFAYTRkAyd8h7aqH5N4QML%2FQe5c4cBL68IAEamROeyB5RSXlnJVXuXnWDXG8szS0XD7EPuk&ac=8524851&src=5714242&evtcd=FOCUS_VIEW&x_ti=1434&tb=&oid=&sid1=&sid2=&rk=b6e3e2e88ea94d941d7d3532313f629a&eltts=lO%2BNXtdHMBFqhWJvAyirPg%3D%3D&brs=Y&&eid=V810&dummy=0.42356012076940786", 
		"Resource=0", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_custom_request("ocsp.digicert.com_8", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02f\\x1B\\x8F\\xBA\\x0C\\x05\\x07\\x054Kb\\xCBi\\xD2\\xDB", 
		LAST);

	web_custom_request("ocsp.digicert.com_9", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02f\\x1B\\x8F\\xBA\\x0C\\x05\\x07\\x054Kb\\xCBi\\xD2\\xDB", 
		LAST);

	web_url("TRPD01", 
		"URL=https://cologger.shopping.naver.com/api/v1/validexpose/biz/TREND_PROD/expsTrtr/TRPD01?adCntsSeqs=4464581&cntsTypeCd=K54001&inflowCd=sbtp&expsPage=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TRPD01_2", 
		"URL=https://cologger.shopping.naver.com/api/v1/validexpose/biz/TREND_PROD/expsTrtr/TRPD01?adCntsSeqs=4484861&cntsTypeCd=K54001&inflowCd=sbtp&expsPage=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TRPD01_3", 
		"URL=https://cologger.shopping.naver.com/api/v1/validexpose/biz/TREND_PROD/expsTrtr/TRPD01?adCntsSeqs=4485528&cntsTypeCd=K54001&inflowCd=sbtp&expsPage=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.naver.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}