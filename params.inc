// Structure of these parameters
// -- PARAMETER TYPE -- PARAMETER NAME -- PARAMETER VALUE
PARAM( config,  isSecurity            , true )
PARAM( config,  helloVersion          , 00000001 )
PARAM( config,  helloType             , HELLO )
PARAM( config,  featuresReplyVersion  , 00000001 )
PARAM( config,  featuresReplyType     , FEATURES_REPLY)
PARAM( config,  barrierReplyVersion   , 00000001)
PARAM( config,  barrierReplyType      , BARRIER_REPLY)
PARAM( config,  getConfReplyVersion   , 00000001)
PARAM( config,  getConfReplyType      , GET_CONFIG_REPLY)
PARAM( config,  statsReplyVersion     , 00000001)
PARAM( config,  statsReplyType        , STATS_REPLY)
PARAM( config,  pktInVersion          , 00000001)
PARAM( config,  pktInType             , PACKET_IN)
PARAM( config,  openflow_version      , 1)
PARAM( config,  switchCount           , 1)
PARAM( config,  threadCount           , 4)
PARAM( config,  controllerAddress     , localhost)
PARAM( config,  controllerPort        , 6633)
PARAM( config,  startDpid             , 1 )
PARAM( config,  simTime               , 10000 )
PARAM( config,  startDelay            , 6000 )
PARAM( config,  stopDelay             , 500 )
PARAM( config,  hasTopology           , false )
PARAM( config,  hasGraphml            , false )
PARAM( config,  graphml               , Aarnet.graphml )
PARAM( config,  checkForIndividualSwitchSettings , false )

PARAM( switchConfig,  portCountPerSwitch , 4 )
PARAM( switchConfig,  buffersPerSwitch   , 256 )
PARAM( switchConfig,  sendFlag           , true )
PARAM( switchConfig,  disableNagle       , true )
PARAM( switchConfig,  batchSending       , true )
PARAM( switchConfig,  flowTableSize      , 128 )
PARAM( switchConfig,  randomizeStats     , true )

PARAM( trafficGenConfig,  scenario              , TCPSYN/PCAP )
PARAM( trafficGenConfig,  arpEnabled            , false )
PARAM( trafficGenConfig,  fillThreshold         , 1 )
PARAM( trafficGenConfig,  iatType               , 0 )
PARAM( trafficGenConfig,  IAT                   , 100 )
PARAM( trafficGenConfig,  countPerEvent         , 1 )
PARAM( trafficGenConfig,  staticPayload         , false )
PARAM( trafficGenConfig,  onlyTopologyPayloads  , false )
PARAM( trafficGenConfig,  generatorTypeMAC      , SERIAL )
PARAM( trafficGenConfig,  generatorTypeIP       , SERIAL )
PARAM( trafficGenConfig,  generatorTypePort     , SERIAL )
PARAM( trafficGenConfig,  iatDistribution       , Normal )
PARAM( trafficGenConfig,  iatDistributionParamter1 , 100 )
PARAM( trafficGenConfig,  iatDistributionParamter2 , 1 )

#if 0
STATS_CONFIG_PARAM(modules , PPS, RTT, TSL, QLM )
#endif