const char* _SBMS_json = "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"condition\":[\"servicedata\",\"=\",12,\"index\",0,\"73\",\"&\",\"uuid\",\"index\",0,\"0d00\"],\"properties\":{\"movement\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,2,false,true]},\"led\":{\"decoder\":[\"bit_static_value\",\"servicedata\",10,1,false,true]},\"scopetested\":{\"condition\":[\"servicedata\",2,\"bit\",3,0],\"decoder\":[\"static_value\",false]},\"sensingdistance\":{\"condition\":[\"servicedata\",11,\"bit\",3,0,\"&\",\"servicedata\",11,\"bit\",2,0],\"decoder\":[\"static_value\",\"long\"]},\"_sensingdistance\":{\"condition\":[\"servicedata\",11,\"bit\",3,0,\"&\",\"servicedata\",11,\"bit\",2,1],\"decoder\":[\"static_value\",\"middle\"]},\"__sensingdistance\":{\"condition\":[\"servicedata\",11,\"bit\",3,1,\"&\",\"servicedata\",11,\"bit\",2,0],\"decoder\":[\"static_value\",\"short\"]},\"lightlevel\":{\"condition\":[\"servicedata\",11,\"bit\",1,0,\"&\",\"servicedata\",11,\"bit\",0,1],\"decoder\":[\"static_value\",\"dark\"]},\"_lightlevel\":{\"condition\":[\"servicedata\",11,\"bit\",1,1,\"&\",\"servicedata\",11,\"bit\",0,0],\"decoder\":[\"static_value\",\"bright\"]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Motion Sensor",
   "model_id":"W110150X",
   "condition":["servicedata", "=", 12, "index", 0, "73", "&", "uuid", "index", 0, "0d00"],
   "properties":{
      "movement":{
         "decoder":["bit_static_value", "servicedata", 2, 2, false, true]
      },
      "led":{
         "decoder":["bit_static_value", "servicedata", 10, 1, false, true]
      },
      "scopetested":{
         "condition":["servicedata", 2, "bit", 3, 0],
         "decoder":["static_value", false]
      },
      "sensingdistance":{
         "condition":["servicedata", 11, "bit", 3, 0, "&","servicedata", 11, "bit", 2, 0],
         "decoder":["static_value", "long"]
      },
      "_sensingdistance":{
         "condition":["servicedata", 11, "bit", 3, 0, "&","servicedata", 11, "bit", 2, 1],
         "decoder":["static_value", "middle"]
      },
      "__sensingdistance":{
         "condition":["servicedata", 11, "bit", 3, 1, "&","servicedata", 11, "bit", 2, 0],
         "decoder":["static_value", "short"]
      },
      "lightlevel":{
         "condition":["servicedata", 11, "bit", 1, 0, "&","servicedata", 11, "bit", 0, 1],
         "decoder":["static_value", "dark"]
      },
      "_lightlevel":{
         "condition":["servicedata", 11, "bit", 1, 1, "&","servicedata", 11, "bit", 0, 0],
         "decoder":["static_value", "bright"]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _SBMS_json_props = "{\"properties\":{\"movement\":{\"unit\":\"status\",\"name\":\"movement\"},\"led\":{\"unit\":\"status\",\"name\":\"LED\"},\"scopetested\":{\"unit\":\"status\",\"name\":\"scope tested\"},\"sensingdistance\":{\"unit\":\"string\",\"name\":\"sensing distance\"},\"lightlevel\":{\"unit\":\"string\",\"name\":\"light level\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "movement":{
         "unit":"status",
         "name":"movement"
      },
      "led":{
         "unit":"status",
         "name":"LED"
      },
      "scopetested":{
         "unit":"status",
         "name":"scope tested"
      },
      "sensingdistance":{
         "unit":"string",
         "name":"sensing distance"
      },
      "lightlevel":{
         "unit":"string",
         "name":"light level"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/