Betfint Core version 2.0.0 is now available from:

  <https://github.com/betfint/betfint/releases/tag/v2.0.0>

This is a new major version release, including new features, various bugfixes
and performance improvements, as well as updated translations.

Please report bugs using the issue tracker at GitHub:

  <https://github.com/betfint/betfint/issues>

How to Upgrade
==============

If you are running an older version, shut it down. Wait until it has completely
shut down (which might take a few minutes for older versions), then run the
installer (on Windows) or just copy over `/Applications/Betfint-Qt` (on Mac)
or `betfintd`/`betfint-qt` (on Linux).

Upgrade warning
---------------

Before any upgrade we recommend that you securely backup your wallet. Please see
the [Betfint help desk article](https://betfint.zendesk.com/hc/en-us/articles/360001309872-How-to-backup-and-restore-Betfint-dat-and-private-keys)
for more information.

Compatibility
==============

Betfint Core is extensively tested on multiple operating systems using
the Linux kernel, macOS 10.8+, and Windows Vista and later. Windows XP is not supported.

Betfint Core should also work on most other Unix-like systems but is not
frequently tested on them.

**Currently there are known issues with the 2.0.0 Gitian release for macOS 10.13
and you must download the version labelled for High Sierra.**

Notable changes
===============

Betting
-------

The highly anticipated update to the Betfint blockchain is finally here!

The new Betfint Core wallets will fork the network at block 298386 which is
approximately 6:00:00 PM UTC Thursday, September 13, 2018.

With this fork we are enabling “On-Chain” betting. Users can place bets against
the chain and coins will be burned and minted by the chain as required. The
“On-Chain” betting fee is 6% of the profit from winning bets. This low fee means
that Betfint will offer some of the most competitive odds in the world for these
matches. The Oracle portion of the fees collected shall be distributed to all
active Masternodes.

Betfint’s first mainnet betting will be the boxing rematch between Canelo Álvarez
vs. Gennady Golovkin, taking place on September 15, 2018.

zBETF changes
------------

### zBETF Staking

You can now stake zBETF! With the release of zBETF staking, there are effectively
2 versions of zBETF, zBETF minted on the 1.5.0 wallet or lower, and zBETF minted on
Betfint Core wallet version 2.0.0 or higher. New features in this release will
require the use of zBETF v2 (i.e. zBETF minted on this wallet release or later).
If you currently hold zBETF v1 and wish to take advantage of zBETF staking and
deterministic zBETF, you will need to spend the zBETF v1 to yourself and remint
zBETF v2.

In order to take advantage of zBETF staking, you must mint new zBETF v2 and wait
for at least 200 confirmations before that zBETF is considered valid for staking.

Note: To find your zBETF version, click the privacy tab, then the zBETF Control
button then expand the arrows next to the desired denomination.

### Deterministic zBETF Seed Keys

zBETF is now associated with a deterministic seed key. With this seed key, users
are able to securely backup their zBETF outside of the wallet that the zBETF had
been minted on. zBETF can also be transferred from wallet to wallet without the
need of transferring the wallet data file.

2.0.0 change log
----------------

- `3882552` New version 1.5.0, added checkpoint (betfinttor)
- `858ebc1` [Qt] connect automint icon to the UI automint setting change ref: 28466e20a1d5b18ab5b17906c25b65bc99c57c3f (betfinttor)
- `9996c2d` [Wallet] Add a check on zPIV spend to avoid a segfault ref: b8185ae7be6e55b89b828aadc2e5b4370f067c4a\nWhen xION coins are selected and their total value is less than the target value of the payment, there was nothing to see it before commiting the transaction. At which point the function would crap out with an exception which QT would fail to handle, leading to a segmentation fault. This new check avoids this situation. (betfinttor)
- `e90893e` [QT] Update privacy tab info about zeromint on config change ref: c0ffe24c443569d89bb452fb360b661852fdf31a (betfinttor)
- `0e8facf` Instructions on how to make the Homebrew OpenSSL headers visible ref: c9b77b2dc19e195a6491bb905789e3e463d9aa78 (betfinttor)
- `ebb6abb` [Qt] Refresh zPIV balance after resetting mints or spends ref: 992763b51b70f07bb5249abe91557506b5193d2a (betfinttor)
- `84cee56` Correct zerocoin lavel (betfinttor)
- `02ca551` [Wallet] Increase valid range for automint percentage ref: cc8a0a5bcc4a38cb01e20412f9171f5e70970c6b (betfinttor)
- `7d01805` [Wallet/RPC] Add argument to mint zerocoin from specific UTXO ref 9a0b734c7eb92187cdd115a8d3feb7e509d545f0 (betfinttor)
- `6196df8`  [Bug] Segfault with -enableswifttx=0 / -enableswifttx=false ref d2b0172173c339bdba8eb76172a21f6b342b5c66 0bc66f3f9b2b8ee52e730610f4f6d844bbf804c2 (betfinttor)
- `38792ad` [Consensus] Fix compilation with OpenSSL 1.1 ref: 8d3407ae43085017294e922ebe8bd6906c7245e3 (betfinttor)
- `b8bb8ac` [Core] Remove Gitan-OSX warning for High Sierra builds ref: c7e6f0f7fb0af6a3351319cd30e7d00af893bd5a (betfinttor)
- `9c378e1` Change git info in genbuild.sh ref: b5be194 (betfinttor)
- `68293f5` [Documentation] Improve help for mintzerocoin rpc command ref: a5123c2 (betfinttor)
- `f1a6a02` [GUI] Make "For anonymization and staking only" checked by default (by Mrs-X) ref: fbb105a (betfinttor)
- `0f44830` [Consensus] Require standard transactions for testnet ref: 94b9bc9 (betfinttor)
- `8029f8c` [Trivial] Fix errant LogPrint in UpdateZBETFSupply ref: 686b89c 2d5aa5b (betfinttor)
- `b938164` [Trivial] Add debug info for CWallet::ReconsiderZerocoins(). ref 0065d68 (betfinttor)
- `2abd51e` Fix typos which break compilation (betfinttor)
- `d935422` [Bug] remove garbage - OpenSSL (betfinttor)
- `b8375dd` [Fix] forgotten bracket, breaks compilation (betfinttor)
- `c3ba5bf` Update release notes for v1.5.0 (betfinttor)
- `cfb21f9` V1.5.0 (#39) (BetfintTor)
- `dfa3191` Disable correction of moneysupply on zBETF recalc (Kokary)
- `ce9e923` Track value of burned coins (Kokary)
- `78aeb0e` Create payment tx (Kokary)
- `0272fd8` Betting code (TechSquad)
- `3c733a5` Betting RPC commands (TechSquad)
- `17a7e52` QT betting window (TechSquad)
- `754d2b4` Update hardcoded testnet seeds (Cryptarchist)
- `99e7547` Update client name to Paddy Power™ (Cryptarchist)
- `72d065d` Correct dimensions of about page image (Cryptarchist)
- `270f405` Update README.md (BetfintTor)
- `8bc5854` Update README.md (BetfintTor)
- `df8af0d` Update .travis.yml (BetfintTor)
- `6e6c061` Update README.md (BetfintTor)
- `8a5645d` Update README.md (BetfintTor)
- `19a1e25` Update betting code (betfinttor)
- `65d3882` Update protocol version (betfinttor)
- `23f380d` Update version to 1.5.99 and set release to false (betfinttor)
- `a548bc4` Update client name to Sláinte (Cryptarchist)
- `49d99b9` Add some warnings for user when placing bets (Cryptarchist)
- `2b67594` Merge #49: Add some warnings for user when placing bets (Cryptarchist)
- `c199852` Revert "Update betting code" (Cryptarchist)
- `7706d53` Release candidate 1.6.0-master (betfinttor)
- `23aee9b` TechSquad's Betting code implementation into Betfint many  thanks to techSquad team (betfinttor)
- `a635ad0` add missing files (betfinttor)
- `5c045f8` Initialize checkpoints (betfinttor)
- `f700ffa` Remove old files (betfinttor)
- `c9e47df` Add initialized accumulatorcheckpoints.json.h (betfinttor)
- `d7d8114` Add invalid_outpoints.json.h (betfinttor)
- `a817c5c` Add invalid_serials.json.h (betfinttor)
- `c87ed16` travis - Disable logprint scanner (betfinttor)
- `fabe923` Update lint-whitespace.sh (betfinttor)
- `c69af02` travis - disable lint whitespace (betfinttor)
- `439282f` Update README.md (BetfintTor)
- `afa96d7` Travis - disable tests (betfinttor)
- `78495b2` Fix: testnet issue (BetfintTor)
- `fb9e92a` Disable check until reworked - Rather not work on nonstandard transactions (unless -testnet/-regtest) (betfinttor)
- `9ea3988` Enable check until reworked - Rather not work on nonstandard transactions (unless -testnet/-regtest) (betfinttor)
- `c32a888` [FIX] Add OP_RETURN functionality (Kokary)
- `f199bdf` Fix: overviewpage showing wrong total balance (betfinttor)
- `2660461` Fix: nUnlockedBalance (betfinttor)
- `f3cd416` Update gitan descriptions version number (betfinttor)
- `868fa04` Raise protocol and version (betfinttor)
- `a299a91` Rebase TechSquad betting updates from July 12/13 (Kokary)
- `59923c6` Merge Techsquad commits from July 14-July 16 (Kokary)
- `b622bf9` Merge Techsquad commits from July 17 (Kokary)
- `e3f27ee` Replace std:string with std::string (Kokary)
- `d020934` Change payment tx in coinstake to ZeroCoinV2 (Kokary)
- `e757b93` Correct block size (Kokary)
- `73f2e8c` Set testnet block for ZerocoinV2 (Kokary)
- `b743b77` [RPC ListEvents Update] Now looking back only two weeks for events instead of looking back to genesis block. (TechSquad)
- `38fb2ac` [QT Events list Updates] Now only looking back two weeks for events instead of looking back to genesis block. (TechSquad)
- `786ab62` [Bet payout block validation] Added the final pieces of code to validate the payout block. (TechSquad)
- `fde6241` Set testnet block for ZerocoinV2 (TechSquad)
- `5ed0640` [Bug Fix] payout block validation (TechSquad)
- `c16ed9f` Revert "[QT Events list Updates] Now only looking back two weeks for events instead of looking back to genesis block." (TechSquad)
- `508c93a` [Bug Fix] List events RPC (TechSquad)
- `ae9719b` [Skip Block] Removed the skip block logic used for testing. (TechSquad)
- `a75c5d7` [Bug Fix] pindex height issue (TechSquad)
- `6fb2a25` [Bug Fix] Oracle reward calculation (TechSquad)
- `2c42975` [testing] reward calculations (TechSquad)
- `44536c3` [testing] reward calculations (TechSquad)
- `e7332b1` [FIX] deduct masternode payment from vout[1] instead of last vout (Kokary)
- `ce52ed4` Enable zerocoin maintenance mode by default (Kokary)
- `8460aee` [QT Place Bet] prevent bet TX with zero fees to ensure bet TX has a change address. (TechSquad)
- `0280c66` Merge #50: zBETFv2 implementation and betting code updates (Cryptarchist)
- `55698a7` Regenerate manpages (Cryptarchist)
- `f2abda5` Merge #51: Regenerate manpages (Cryptarchist)
- `78e1195` Update configure.ac version on master and set release to false (Cryptarchist)
- `1d43a92` Merge #52: Update configure.ac version on master and set release to false (Cryptarchist)
- `a8355e5` Update checkpoints for main and testnet (betfinttor)
- `20f693b` Set zerocoin v2 startheight for main and testnet (betfinttor)
- `87d47fd` Change date to for enforcing of a new sporks key for main net (betfinttor)
- `f20865a` Change date when old sporks key should be fully for main net (betfinttor)
- `0b6f7ef` remove depreceated nodes file for main net (betfinttor)
- `8123a30` remove depreceated nodes file for testnet (betfinttor)
- `8da92f4` Add script to create seeds from chainz block explorer (betfinttor)
- `27f45c0` Add description for seeds creation script (betfinttor)
- `6c83c0a` Add randomly new hardcoded seeds with some static ips (betfinttor)
- `92dfdc2` Bump protocol and accept old 70918 (betfinttor)
- `3b8771a` Move bet params to chainparams and clean up the code (betfinttor)
- `b9a58b2` Bump version to 1.6.03 (betfinttor)
- `da6e8a9` Fix bugs: reward pays too much and correct last pow block (betfinttor)
- `1506c8a` Set testnet settings (betfinttor)
- `4478cc2` Initalize zerocoin v1 checkpoints (betfinttor)
- `b9ee0a1` Remove deprecated dynamic exception specification (betfinttor)
- `49c9126` Set release to false and revision 99 (default for master) (betfinttor)
- `dd444db` Add release notes for version 1.6.03 (betfinttor)
- `26124db` Replace SNAP's home dir (betfinttor)
- `31ac8e5` Revert to default HOME (non SNAP's default home dir) (betfinttor)
- `f5610cd` Add SNAP's default dir to prevent user accidently overwritting datadir on update (betfinttor)
- `1005234` Add spork key (Kokary)
- `1d65e18` Add datadir info/path on Information tab in QT (betfinttor)
- `733d6c6` Set coin types for BIP-0044 (betfinttor)
- `9c40777` Fix QT: network label is in wrong row (betfinttor)
- `76295b0` Update vExpectedMint calculation (Kokary)
- `5c90d0b` Bet winning labels have been updated to show multiple bet winnings TX and correct bet winning amounts (TechSquad)
- `66c3daa` Minor code adjustment (betfinttor)
- `18bbe8c` removal of skip blocks code used in (betfinttor)
- `c4597fa` Change masternode zBETF stake value (betfinttor)
- `264880b` if zero odds then show N/A on on odds button. (TechSquad)
- `8f2bfef` Update client version (betfinttor)
- `bd2da3a` Update protocol version (betfinttor)
- `b72139a` Bet winning labels have been updated to show multiple bet winnings TX and correct bet winning amounts (TechSquad)
- `c8ad990` Minor code adjustment (betfinttor)
- `c90f1f9` removal of skip blocks code used in (betfinttor)
- `c373364` Change masternode zBETF stake value (betfinttor)
- `de9956e` if zero odds then show N/A on on odds button. (TechSquad)
- `f7b7e67` Update client version (betfinttor)
- `b278131` Update protocol version (betfinttor)
- `240aede` Update client version for master to default (BetfintTor)
- `6748bdf` Update removed var (betfinttor)
- `e692d05` Merge pull request #57 from betfint/1.6.04 (BetfintTor)
- `dcc2325` Update configure.ac (BetfintTor)
- `fac4529` Replace hardcoded OddsDivisor in placebetevent (betfinttor)
- `e51bfdf` Let protocol 70918 connect (old clients) (betfinttor)
- `ee52401` Merge pull request #58 from betfint/1.6.04 (BetfintTor)
- `534f01f` Update removed var (betfinttor)
- `c0239b9` Initialize nBetValue (betfinttor)
- `cde1ab8` Comment unrequired variables out (betfinttor)
- `b3ab807` Fix warning during compilation (betfinttor)
- `6a2d201` Update checkpoints (betfinttor)
- `08bba66` REENABLE Zerocoin (betfinttor)
- `b045fa7` Revert change made in c8ad990c8cd62036eed9de634cd821560e843f6e (betfinttor)
- `85c8678` Add encrypted testnet sporkkey and description for usage (betfinttor)
- `cb1b37b` Set locks on cs_wallet for getmasternodeoutputs (Kokary)
- `2f064ad` Accumulator initialization on the first zerocoin v2 block (Kokary)
- `3cd88af` Set v2 start height to closer block (Kokary)
- `3045cd8` Add rpc command to calculate accumulator values (Kokary)
- `f8530f1` Enable creating zerocoin v1 spend transaction (Kokary)
- `1d774da` Removed the popup that stop bets being placed with no change address (Martin Bullman)
- `492778f` Add 4th betting message type (refunds) (Kokary)
- `0f02a23` Added the functionality for a new TX type 4. Which will refund all bets placed on a certain event. (Martin Bullman)
- `ce79a47` Added functionality to cancel events by removing them from the QT. (TechSquad)
- `76851bc` Remove change address warning (Kokary)
- `96ee630` Update stake rewards: testnet rewards unified with mainnet rewards and zBETF stake rewards set to 1 (instead of 0.95) (Kokary)
- `05b617c` Protocol version bump (Kokary)
- `5aed6f6` Set checkpoint and fork height for testnet; update testnet parameters (Kokary)
- `bb329a8` Update hardcoded testnet seeds (Cryptarchist)
- `d98932c` Start bet scanning at nBetStartHeight instead of at hardcoded txid (Kokary)
- `019da8f` Set initial mainnet parameters (Kokary)
- `daecf8f` [Betting Code Refactoring] Refactoring hard coded data and general betting code clean up. (TechSquad)
- `bac6985` [BETFCORE-33] Add new mainnet checkpoint for block 290000 (Cryptarchist)
- `436f350` [BETFCORE-38] Add help link to Telegram on betting tab (Cryptarchist)
- `57c0c0f` [BETFCORE-44] Build: Bump version to 2.0.99 (Cryptarchist)
- `310874f` [BETFCORE-27] Doc: Add release notes for 2.0.0 (Cryptarchist)
- `5b3596c` [BETFCORE-49] Update v2.0.0 client name to Monte Carlo (Cryptarchist)
- `8b26520` [BETFCORE-52] Qt: Fix bet amount warning to the correct values (Cryptarchist)
- `c7bf1b3` [BETFCORE-25] Ensure that we use the min and max BetPayoutRange variables in placebetdialog.cpp (Kokary)

Credits
=======

Thanks to everyone who directly contributed to this release:

- Cryptarchist
- Kokary
- Martin Bullman
- TechSquad
- betfinttor

As well as everyone that helped translating on [Transifex](https://www.transifex.com/projects/p/betfint/).
