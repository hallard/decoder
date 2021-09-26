module.exports = {
    markdown: {
      lineNumbers: true
    },
    title: 'Theengs decoder',
    description: 'One decoder for many devices, decode easily your BLE devices data and transform these into a readable format',
    head: [
      ['link', { rel: 'icon', href: '/img/Openmqttgateway_logo_mini.png' }],
      ['link', { rel: 'manifest', href: '/manifest.json' }],
      ['meta', { name: 'theme-color', content: '#3eaf7c' }],
      ['meta', { name: 'apple-mobile-web-app-capable', content: 'yes' }],
      ['meta', { name: 'apple-mobile-web-app-status-bar-style', content: 'black' }],
      ['link', { rel: 'mask-icon', href: '/icons/safari-pinned-tab.svg', color: '#3eaf7c' }],
      ['meta', { name: 'msapplication-TileImage', content: '/icons/msapplication-icon-144x144.png' }],
      ['meta', { name: 'msapplication-TileColor', content: '#000000' }],
      ['script', {type: 'module', src: 'https://unpkg.com/esp-web-tools@3.4.2/dist/web/install-button.js?module'}]
    ],
    themeConfig: {
      smoothScroll: true,
      repo: 'theengs/1decoder',
      docsDir: 'docs',
      docsBranch: 'master',
      lastUpdated: 'Last Updated',
      editLinks: true,
      sidebar: [
        ['/','0 - What is it for 🏠'],
        {
          title: '1 - Devices 🌡️',   // required
          sidebarDepth: 1,    // optional, defaults to 1
          children: [
            'devices/CGD1',
            'devices/CGP1W',
            'devices/H5072',
            'devices/H5075',
            'devices/IBS_TH1',
            'devices/IBS_TH2',
            'devices/IBS_X4S',
            'devices/iNode',
            'devices/MokoBeacon',
            'devices/MBXPRO',
            'devices/CGDK2',
            'devices/CGH1',
            'devices/CGPR1',
            'devices/TPMS',
            'devices/VEGTRUG',
            'devices/WS02',
            'devices/HHCCJCY01HHCC',
            'devices/XMTZC04HM',
            'devices/XMTZC05HM',
            'devices/CGG1',
            'devices/LYWSD02',
            'devices/LYWSD03MMC_ATC',
            'devices/LYWSD03MMC_PVVX',
            'devices/LYWSDCGQ',
            'devices/Miband',
            'devices/MUE4094RT'
          ]
        },
        {
          title: '2 - Use ✈️',   // required
          sidebarDepth: 1,    // optional, defaults to 1
          children: [
            'use/include',
            'use/ESP32'
          ]
        },
        {
          title: '3 - Participate 💻',   // required
          sidebarDepth: 1,    // optional, defaults to 1
          children: [
            'participate/support',
            'participate/development',
            'participate/adding-decoders'
          ]
        }
    ]
    },
    plugins: [
      ['@vuepress/pwa', {
        serviceWorker: true,
        updatePopup: true
      }],
      ['@vuepress/medium-zoom', true],
      ['@vuepress/nprogress']
    ]
  }