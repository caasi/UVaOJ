#include<stdio.h>
int cousinj[3502]={0,1,1,1,4,1,4,3,8,7,1,6,12,12,3,14,16,9,7,14,3,19,14,18,16,7,1,4,18,3,15,7,13,15,18,19,4,14,3,27,31,23,15,31,33,45,42,44,30,20,16,3,22,37,24,53,42,16,22,21,60,24,35,26,43,34,38,37,56,48,46,36,45,40,25,56,46,14,36,48,67,42,37,19,6,74,35,29,22,25,82,18,82,68,38,92,95,66,40,74,60,3,70,20,62,55,97,27,20,50,27,32,9,65,35,76,29,107,73,6,95,53,21,71,54,86,81,40,60,68,44,67,55,109,64,116,114,64,50,97,94,82,102,45,45,144,45,47,43,79,76,81,82,148,54,32,117,141,30,156,122,106,106,9,34,126,67,45,9,163,25,145,66,90,138,156,33,120,19,34,79,70,176,113,98,157,127,67,54,143,59,103,70,50,179,134,8,21,161,92,140,76,18,26,37,157,13,142,186,138,107,12,114,134,19,184,144,57,139,103,178,217,92,207,150,42,145,47,81,106,135,108,45,8,193,30,35,202,32,12,240,212,230,176,53,82,96,93,243,172,195,128,3,65,117,62,6,191,111,208,181,47,47,237,91,156,108,69,90,257,262,52,103,96,156,126,12,79,152,141,72,121,49,82,46,138,220,180,275,282,217,174,87,159,72,282,262,256,53,101,278,178,95,139,211,112,267,277,225,291,50,249,176,26,104,31,64,199,103,279,21,12,111,12,292,211,246,247,39,9,282,258,170,182,199,134,86,62,303,78,171,202,248,159,192,326,298,45,235,297,344,49,110,166,151,50,334,320,217,114,332,11,91,91,64,259,240,173,92,136,76,99,226,163,90,329,249,342,3,339,103,256,362,376,362,142,88,52,64,305,177,131,372,163,295,102,355,199,130,179,264,189,196,118,370,150,52,262,245,200,171,313,306,280,27,204,101,185,37,74,298,48,169,322,35,298,183,219,423,148,152,260,326,42,330,282,163,76,137,96,244,237,442,193,434,146,185,62,424,161,228,23,93,6,189,171,82,15,315,131,73,226,269,297,315,303,317,418,455,298,404,333,29,322,57,447,407,167,286,233,230,51,112,297,264,103,482,413,117,402,153,356,44,90,443,417,273,367,413,148,115,274,336,342,309,459,242,347,461,251,103,15,134,69,217,110,43,503,120,360,361,81,97,510,433,236,492,397,130,457,206,405,446,414,429,394,485,299,366,248,351,9,406,240,237,473,457,454,512,516,90,219,334,297,9,66,466,442,536,508,277,108,150,243,496,350,513,331,190,195,232,362,226,479,345,396,161,193,33,261,314,163,475,349,172,559,225,471,475,558,208,357,486,406,59,518,285,158,179,142,48,433,494,371,244,593,364,310,164,591,165,430,98,304,67,358,445,527,293,9,577,78,246,209,613,378,592,72,527,196,92,401,362,14,573,33,422,611,255,206,215,574,372,590,383,209,635,12,193,288,65,383,581,439,118,234,466,386,576,404,373,626,566,275,641,24,230,584,175,56,366,62,274,312,475,121,72,51,29,209,86,500,109,550,98,126,469,330,662,163,498,148,188,512,62,180,103,38,1,152,632,483,690,217,9,135,255,362,332,695,542,14,708,601,459,517,159,216,216,187,549,14,500,103,194,475,510,161,185,417,88,456,418,294,482,419,117,78,460,61,602,4,470,676,345,419,357,464,736,290,312,612,607,90,412,199,629,387,561,570,370,158,384,490,744,212,302,213,290,32,720,67,164,626,178,104,582,599,269,735,553,493,266,486,126,525,708,370,98,52,688,402,323,216,775,413,736,796,38,528,228,21,131,109,632,48,510,185,189,116,758,117,228,329,667,696,182,569,66,235,428,218,332,46,479,33,751,45,460,512,494,713,27,510,536,774,389,256,468,696,567,375,683,193,713,447,199,258,256,178,775,156,829,90,244,638,751,9,765,371,428,697,360,635,207,677,255,594,182,481,787,447,278,840,731,687,812,819,385,303,466,543,111,733,619,374,157,631,370,366,818,3,318,102,686,792,882,828,812,297,333,615,705,851,876,23,338,285,733,192,645,575,797,803,621,836,914,493,605,377,609,736,344,873,806,93,782,141,771,402,331,148,73,690,717,864,483,782,592,839,183,382,247,503,526,635,731,138,190,532,446,242,846,925,944,229,460,479,603,60,39,333,697,869,174,47,736,706,801,900,426,331,630,192,840,354,37,394,314,13,105,299,937,783,394,820,763,369,938,811,122,817,470,393,395,83,104,787,663,959,897,650,404,540,79,19,506,528,622,784,495,526,234,428,377,549,15,829,886,215,763,686,361,774,689,27,788,968,89,971,261,6,661,7,179,356,798,1005,602,446,947,515,309,650,704,996,506,361,467,40,297,934,401,859,900,700,64,965,779,570,340,122,419,1007,1005,1031,491,513,90,681,148,622,560,840,389,548,106,230,456,91,594,812,474,1015,184,304,166,661,658,416,310,666,451,946,1043,412,902,293,637,130,671,609,1043,1053,361,118,317,820,737,247,119,12,605,978,262,707,669,70,489,733,523,1064,327,452,1005,201,758,1091,1105,1126,461,512,973,986,142,251,36,632,556,923,532,997,1042,634,562,804,460,1052,229,880,220,362,647,135,913,111,890,55,753,113,74,464,708,438,317,478,16,1042,908,245,109,654,460,69,918,282,399,638,749,1116,95,59,230,694,913,1149,321,367,155,630,1096,429,83,233,134,139,47,530,922,504,361,1185,717,135,562,204,1167,271,572,966,84,1121,1053,571,589,1165,611,86,26,317,431,103,779,550,477,932,824,80,1037,226,996,289,991,820,945,965,96,332,262,1208,151,513,140,595,485,1007,323,362,278,644,656,507,207,29,105,1216,830,1024,89,1080,1135,507,1063,1240,1222,584,454,312,1170,465,254,656,1229,574,1247,911,939,1081,579,27,1254,838,296,151,856,1183,823,1058,445,994,799,1291,1154,25,442,47,460,947,1194,668,315,717,427,125,277,105,1219,104,442,761,657,954,883,350,264,1024,972,1052,666,704,1177,88,1306,715,800,672,586,692,559,602,474,15,548,833,869,629,1138,157,202,147,114,303,449,483,1276,104,648,470,115,640,661,67,1199,437,1075,233,735,456,428,361,1254,463,423,1234,318,300,422,1260,1210,1139,581,267,1096,385,1204,340,1255,341,1072,403,670,592,322,958,1052,1222,744,941,4,292,1367,533,466,257,396,39,445,1024,449,659,145,466,536,648,1288,49,196,337,318,973,799,783,471,392,714,872,1202,703,271,807,493,1125,369,603,106,1412,954,1103,149,685,383,443,661,947,1413,434,1290,556,1047,220,1106,979,613,1168,537,11,438,12,984,247,191,1437,1376,1094,830,1345,1094,993,489,283,745,744,460,567,432,1148,727,99,1200,725,276,989,1392,977,860,1150,451,1451,1221,1280,1436,627,1405,942,113,237,444,365,1340,610,717,1491,1254,503,217,1430,254,1309,74,416,1160,466,401,648,1056,603,377,935,1085,1475,1384,1115,971,465,1195,1172,595,1440,913,252,597,1420,1227,353,426,979,689,559,1347,356,337,362,146,976,1028,74,1172,173,539,685,69,1081,1068,641,895,1366,430,183,231,541,985,637,358,264,466,441,1274,711,971,1332,391,805,729,861,681,1279,1377,572,227,635,726,178,1191,1403,779,650,257,835,294,820,190,439,836,426,302,271,42,1000,1090,40,1152,617,341,938,256,420,526,928,1242,261,467,227,1509,1377,411,315,363,970,861,1457,493,336,771,21,1240,1113,755,926,1424,609,518,1553,1134,561,284,620,347,571,805,268,135,950,409,930,742,562,315,373,182,716,842,626,193,257,1135,1398,836,1345,1201,12,1592,936,961,485,290,763,996,1630,417,745,286,795,140,1660,443,252,1203,992,694,1585,1518,1140,698,1649,131,1054,643,1602,1142,1640,1614,397,694,1394,916,1521,465,1118,1242,623,927,1421,1217,175,619,185,1519,1604,1091,1263,727,662,531,1581,1388,1441,1492,1048,210,619,97,903,747,1633,716,857,1331,843,294,690,1438,893,1138,284,849,279,997,580,1347,1056,1118,1381,108,541,1570,251,776,861,798,1232,1651,1100,1559,1512,1491,1013,1528,1703,872,1693,1623,1293,1545,465,1573,442,1474,226,117,1287,1495,1015,1185,1574,1375,677,584,444,815,253,1604,1071,1179,770,257,1769,970,1509,443,1272,1676,198,1663,1253,680,619,758,686,1669,156,24,1077,338,263,1436,1118,811,959,265,973,1790,1718,1424,1708,1605,603,312,584,920,1330,1686,1362,388,260,537,299,595,925,815,922,289,1106,3,895,1344,1148,1067,302,47,1408,864,980,1226,782,1815,496,323,1305,1680,739,411,69,873,937,1759,1141,739,523,174,471,158,597,247,1805,756,177,904,1405,1111,1214,1355,1162,111,689,1363,246,877,760,1328,471,454,1529,311,857,1408,1513,614,186,429,332,1189,843,1469,133,746,372,1016,252,731,296,745,1129,414,1603,1004,1159,1063,155,709,1373,864,1747,130,42,1045,371,330,607,814,1106,410,836,1043,473,1796,1318,1621,1760,422,138,497,1140,1454,1865,818,1750,330,384,1742,1571,1044,997,1278,361,332,683,221,1870,1673,1183,618,1567,119,431,1271,745,1316,547,1849,619,1112,343,229,1056,1949,1666,1742,436,540,782,1868,614,910,597,662,950,814,1714,33,1021,1524,574,1449,1760,1890,1059,82,1686,1762,1507,1475,1299,439,1104,1061,410,916,1274,273,1154,700,1964,794,397,201,1312,477,414,1580,894,344,162,1087,717,338,798,709,657,582,267,3,811,34,1482,1600,1667,76,1241,984,1182,93,1752,1409,848,792,1912,1671,1567,943,1231,1986,1993,878,688,455,739,884,1398,1843,1642,1850,1402,1943,1170,369,1980,413,1859,1957,454,516,857,341,1333,983,2030,1529,1934,341,118,193,9,1623,1525,1882,1923,477,957,1786,232,1574,1608,1778,1132,1322,551,402,1035,1835,188,960,1004,1917,1090,317,673,1373,1735,1699,1302,108,272,187,166,1062,12,1693,1658,1714,2056,277,1834,1702,1868,64,263,1878,340,1192,298,1703,336,543,1130,1291,1858,1065,770,553,1841,598,632,1375,302,2089,525,521,1953,1631,700,83,1198,13,215,332,2057,629,1719,1734,2059,1858,1601,269,2078,161,732,640,97,1920,326,971,319,2143,443,1845,250,257,565,606,279,1973,832,1986,458,441,1866,534,548,427,925,1707,1486,1142,907,1548,1738,1553,410,1107,1779,633,476,983,1058,939,981,231,1717,967,807,1749,1954,1175,322,1292,1722,36,1304,1062,1276,1555,1238,1826,457,1787,198,401,847,1238,707,1046,1832,273,216,736,902,775,972,1426,1505,1871,1657,260,1127,1669,211,812,1,321,978,167,939,363,147,2179,657,1308,30,106,51,395,246,892,714,962,1223,475,758,1519,437,1605,1859,426,325,1782,841,726,2216,1958,921,2109,1585,175,2092,1485,1798,1272,256,64,2103,68,1080,341,1974,1451,460,882,2187,2122,1328,2203,256,1920,1382,1632,490,2043,124,119,1726,1872,2229,233,1353,127,1253,162,1090,1185,1522,2070,610,203,1771,2066,2283,295,2192,828,2254,1096,1735,693,1785,70,2016,1217,1658,1192,2142,621,2030,2114,1462,793,2052,1502,1177,1717,1688,1799,1259,1769,12,1758,2140,1453,220,613,125,1463,1888,1377,1698,990,1505,1483,2313,567,1673,1023,1963,261,1065,990,1568,1768,1031,298,1757,557,1861,374,133,1228,1424,1143,1343,1770,199,110,201,680,1859,1549,998,1245,2074,1340,1885,1390,1450,923,62,1604,1261,877,2261,1144,910,1409,2072,1998,286,108,1034,792,2042,577,463,1730,2146,508,1496,554,1669,2095,1700,786,493,503,234,939,473,625,1228,514,863,1372,1514,1366,2150,2141,288,40,2377,1248,1165,438,483,2172,417,784,1639,1613,475,1520,1929,2349,1686,827,1195,1708,2136,1313,1901,1654,872,926,1904,251,1485,201,628,2062,1500,1642,1445,1473,641,788,142,1854,405,2238,1336,1442,1757,1031,2184,1943,456,2111,411,2473,2209,842,85,1072,842,840,1365,1241,363,1933,1083,301,1844,961,2383,2180,1899,151,1512,1585,16,1819,1052,2193,1521,695,932,2445,432,541,1112,2393,1877,433,1084,2344,2022,1568,204,2323,110,738,975,63,2370,20,1794,637,1909,973,2111,1054,2273,2140,992,936,1433,1636,673,155,201,34,1250,2405,256,834,1100,354,1629,847,402,166,2047,1578,154,813,1991,1648,534,504,706,1024,2529,1104,2231,1407,2389,183,2047,1781,2119,1361,807,1409,1734,139,1645,2101,565,2204,91,301,11,1169,1037,1166,170,2526,743,1315,404,1467,153,1958,615,1382,2440,196,2170,189,139,1422,1994,1926,1678,1203,182,2334,407,987,2574,2298,921,994,519,1930,1959,232,1522,1549,2460,768,525,2280,884,1164,581,344,1497,2244,1571,1022,977,1162,1224,616,2042,2498,1322,2452,2449,2180,1344,117,1803,1769,1302,2452,583,1962,1986,1407,1009,1637,1282,2590,76,2412,2078,2076,2651,2593,1056,2200,1761,594,2267,1183,1395,2371,1346,59,1040,2195,2606,643,1048,26,1191,891,42,1917,2056,1951,295,2622,434,121,1271,489,11,1389,1497,908,827,716,107,152,2598,2163,1492,2565,1620,1507,552,1968,936,802,118,800,2665,1110,296,1453,339,2179,419,862,524,1134,2335,1336,2371,1463,1631,563,891,361,1041,1210,938,1120,644,196,584,839,1430,884,1089,78,1624,293,449,636,247,1152,1920,488,2561,713,1238,1733,826,630,1140,1266,1283,2304,1558,612,1011,953,1267,111,1926,2577,2110,893,449,953,1668,1865,1044,2650,773,1819,85,182,472,1489,2696,2637,1950,1566,2240,572,480,2570,1062,523,2085,1899,2760,2425,325,2495,332,324,2212,2121,1024,1587,341,2243,2758,2206,611,2690,339,983,2179,482,2717,2373,1460,774,2005,187,1153,1559,2573,1628,72,2707,729,511,509,720,317,2640,1186,2527,620,675,503,310,2061,1897,2043,94,18,1873,2343,2794,278,2472,37,1132,1041,551,1333,1694,836,284,881,1110,850,976,75,827,2397,182,1313,2835,1283,2325,759,1464,7,2306,2404,2523,2396,2677,2366,2847,1875,2737,1453,2646,1518,135,1857,2555,834,2476,1228,1728,2344,2740,2351,2714,239,1970,1806,350,1238,1032,94,2370,2564,1029,668,2360,561,2145,2761,2889,1151,646,2881,425,2408,1909,729,1940,2364,1162,2071,1662,1233,1221,2181,1333,1079,430,168,973,506,1349,2274,1054,1486,2121,2609,983,1933,1137,1997,604,1445,2149,163,1741,2305,150,2224,2511,670,146,2832,2174,578,1327,29,2502,2734,88,2841,1270,2504,1908,623,2636,708,2138,1696,1015,1543,550,2547,1965,1063,2023,2299,2157,2420,1016,2873,2448,1944,2623,788,2617,1423,535,192,21,327,2598,1402,940,13,2053,848,1260,1501,2646,756,2534,586,2683,23,2601,652,1613,1139,2201,177,174,2291,279,2218,1934,3009,1349,2250,746,21,684,51,1828,2981,862,2974,1194,1944,2124,1762,1152,1709,1899,2820,2995,965,2854,1900,489,84,500,2714,640,207,1975,627,1689,1666,1366,2409,1727,2524,1848,541,1392,1093,1828,37,1991,2801,1729,1733,987,364,636,70,1960,426,1196,96,2630,2615,2171,2826,1923,2977,2751,2249,2360,1762,2944,1886,2403,771,1511,1516,649,2537,413,2262,595,1300,186,2282,1187,1523,1418,1398,1323,842,146,594,744,1786,840,2470,134,1902,1441,1390,435,2002,835,2674,1938,2872,3046,743,2368,412,1924,3030,1582,1719,299,1870,2953,2382,2800,2999,2516,629,1736,475,1026,1018,1155,1823,2547,1722,2905,638,470,2957,1392,1781,510,363,1525,1448,948,676,1260,199,543,3015,3109,1699,1151,367,666,711,830,2567,2363,2492,1574,368,605,661,1763,1290,70,378,3026,291,132,929,455,2561,733,2996,2045,1018,1229,2742,1454,727,1884,2813,789,442,2254,1526,2401,2508,2491,1383,1608,1301,1466,1897,1562,2666,1575,1943,3188,608,992,1562,1089,2356,767,369,1753,1019,1110,2558,2682,630,2109,297,2985,2201,1997,1659,2588,349,70,1742,2573,55,3119,198,118,2995,774,504,1153,630,2142,2808,2352,2939,2242,1783,2242,2540,1099,2064,1553,505,444,3010,1708,101,248,3229,3176,4,2386,53,442,2489,1310,1683,1168,1245,384,1227,382,744,2061,728,354,3040,954,1947,3108,1088,2509,1858,736,2640,2943,86,3097,3127,844,2663,2779,1739,2055,1590,1024,3090,2852,3207,1133,2017,3072,546,235,1537,1416,2239,1736,1955,1865,727,2065,3159,2489,356,2384,2601,1389,1104,1378,2576,1175,1493,2099,2909,2507,3070,1969,1767,2901,2492,852,2343,2172,2030,708,675,996,585,3152,1486,3301,1083,850,1667,196,484,19,1366,648,1234,2692,1829,416,378,1980,3274,2167,2093,1517,1888,3162,739,412,2480,2693,837,1122,1953,316,490,2144,2012,283,1072,3193,32,1847,1186,2464,1157,3278,1590,2943,2474,1320,354,3302,1683,1320,421,698,2603,2848,2574,1246,2262,2671,1903,953,781,485,813,1233,3357,2022,2763,2238,2422,3372,2103,892,230,1969,2222,2139,2771,2649,216,2161,466,1681,2265,1437,2105,918,2018,2434,2260,2903,174,1452,872,1584,858,1680,2324,2507,1648,675,2075,1913,614,2532,1993,3162,1335,814,2880,59,1011,2256,628,3311,2332,823,2268,548,2400,1879,2084,2063,3344,3377,2381,619,1473,3458,2347,3374,1875,2508,2317,1578,2409,552,472,2530,893,116,697,3133,3186,549,29,1755,1075,3393,148,812,1501,2471,2426,2586,2591,3287,1637,1942,2575,1746,1065,1789,2417,2381,1494,141,3164,1835,2326};

int main(int argc, char *argv[])
{
	int num;
	while(scanf("%d", &num) != EOF)
	{
		if(!num)
			break;
		printf("%d\n", cousinj[num]);
	}
	return 0;
}

